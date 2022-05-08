/**
 * @author Dat Vu
 * @date 2022-05-08 08:17 PM
 */


import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;
import java.util.SortedSet;
import java.util.TreeMap;
import java.util.TreeSet;

public class TimKhoa {
    private Scanner scan = new Scanner(System.in);
    // Attributes
    private String attribute;
    private Map<String, String> f;

    public TimKhoa() {
        f = new TreeMap<>();
    }

    public String timKhoa() {
        String res = "";
        int i = 0;
        StringBuilder temp = new StringBuilder(attribute);
        while (i < temp.length()) {
            char c = temp.charAt(i);
            String target = temp.deleteCharAt(i).toString();
            BaoDong baoDong = new BaoDong();
            baoDong.setAttribute(attribute);
            baoDong.setF(f);
            baoDong.setTarget(target);
            if (!baoDong.timBaoDong().equals(attribute)) {
                res += c;
                temp.insert(i, c);
                i++;
            }
        }
        return res;
    }

    public SortedSet<String> timKhoas() {
        SortedSet<String> res = new TreeSet<>();
        SortedSet<Character> left = getSubcharStr(f.keySet());
        SortedSet<Character> right = getSubcharStr(new HashSet<>(f.values()));
        SortedSet<Character> itrsectLeftRight = new TreeSet<>(left);
        itrsectLeftRight.retainAll(right);

        Set<String> attr = new HashSet<>();
        attr.add(attribute);
        SortedSet<Character> des = getSubcharStr(attr);
        des.removeAll(right);

        Iterator<Character> desIter = des.iterator();

        StringBuilder target = new StringBuilder();
        while (desIter.hasNext()) {
            char c = desIter.next();
            target.append(c);
        }

        Iterator<Character> itrsectLeftRightIter = itrsectLeftRight.iterator();
        while (itrsectLeftRightIter.hasNext()) {
            target.append(itrsectLeftRightIter.next());
            BaoDong baoDong = new BaoDong();
            baoDong.setAttribute(attribute);
            baoDong.setF(f);
            baoDong.setTarget(target.toString());
            if (baoDong.timBaoDong().equals(attribute)) {
                res.add(target.toString());
            }
            target.deleteCharAt(target.length() - 1);
        }
        return res;
    }

    private SortedSet<Character> getSubcharStr(Set<String> src) {
        SortedSet<Character> res = new TreeSet<>();
        Iterator<String> srcIter = src.iterator();
        while (srcIter.hasNext()) {
            char[] temp = srcIter.next().toCharArray();
            for (char x : temp) {
                res.add(x);
            }
        }
        return res;
    }

    public void input() {

        // Input thuoc tinh dam bao da duoc sap xep a-z
        attribute = scan.nextLine();
        char[] temp = attribute.toCharArray();
        Arrays.sort(temp);
        attribute = String.copyValueOf(temp);

        int numOfF = scan.nextInt();
        for (int i = 0; i < numOfF; i++) {
            String left = scan.next();
            String right = scan.next();
            f.put(left, right);
        }
    }

    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("timkhoa.txt"));
        TimKhoa timKhoa = new TimKhoa();
        timKhoa.input();
        System.out.println("Khoa toi thieu la : " + timKhoa.timKhoa() + "\n");

        SortedSet<String> khoas = timKhoa.timKhoas();
        System.out.println("Danh sach cac khoa toi thieu la : ");
        khoas.forEach(k -> System.out.println(k));
    }
}
