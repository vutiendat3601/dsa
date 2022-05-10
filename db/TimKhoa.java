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
    private Scanner scan = App.scan;
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
            System.out.println("------Thu loai thuoc tinh " + c + " khoi " + temp.toString());
            String target = temp.deleteCharAt(i).toString();
            BaoDong baoDong = new BaoDong();
            baoDong.setAttribute(attribute);
            baoDong.setF(f);
            baoDong.setTarget(target);
            String bdRes = baoDong.timBaoDong();
            if (!bdRes.equals(attribute)) {
                System.out.println("=> " + bdRes + " ------> Khong the loai thuoc tinh " + c);
                res += c;
                temp.insert(i, c);
                i++;
            } else {
                System.out.println("=> " + bdRes + " ------> Da loai thuoc tinh " + c);
            }
        }
        return res;
    }

    public SortedSet<String> timKhoas() {
        SortedSet<String> res = new TreeSet<>();

        // Tim tap thuoc tinh left
        SortedSet<Character> left = getSubcharStr(f.keySet());
        System.out.println("Buoc 1: Tim tap thuoc tinh Left (L) cua phu thuoc ham: ");
        left.forEach(l -> System.out.print(l + " "));
        System.out.println("\n");

        SortedSet<Character> right = getSubcharStr(new HashSet<>(f.values()));
        System.out.println("Buoc 2: Tim tap thuoc tinh Right (R) cua phu thuoc ham: ");
        left.forEach(r -> System.out.print(r + " "));
        System.out.println("\n");

        SortedSet<Character> itrsectLeftRight = new TreeSet<>(left);
        itrsectLeftRight.retainAll(right);
        System.out.println("Buoc 3: Tim tap thuoc tinh giao giua Left va Right TG = L ^ R:");
        itrsectLeftRight.forEach(i -> System.out.print(i + " "));
        System.out.println("\n");

        Set<String> attr = new HashSet<>();
        attr.add(attribute);
        SortedSet<Character> des = getSubcharStr(attr);
        des.removeAll(right);
        System.out.println("Buoc 4: Tim tap dich TD = U - R");
        des.forEach(d -> System.out.print(d + " "));
        System.out.println("\n");

        Iterator<Character> desIter = des.iterator();

        StringBuilder target = new StringBuilder();
        while (desIter.hasNext()) {
            char c = desIter.next();
            target.append(c);
        }

        Iterator<Character> itrsectLeftRightIter = itrsectLeftRight.iterator();
        System.out.println(
                "Lay tap dich (TD) giao voi tap trung gian TG va kiem tra tinh bao dong.\n Neu ket qua tinh bao dong = "
                        + attribute + " (U - tap thuoc tinh tong) thi la KHOA");
        while (itrsectLeftRightIter.hasNext()) {
            target.append(itrsectLeftRightIter.next());
            System.out.println(target.toString());
            BaoDong baoDong = new BaoDong();
            baoDong.setAttribute(attribute);
            baoDong.setF(f);
            baoDong.setTarget(target.toString());
            if (baoDong.timBaoDong().equals(attribute)) {
                System.out.println(
                        "Vi " + target.toString() + " -> " + attribute + " => " + target.toString() + " la KHOA");
                res.add(target.toString());
            }
            target.deleteCharAt(target.length() - 1);
            System.out.println();
        }
        System.out.println();
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
        timKhoa.scan = new Scanner(System.in);
        timKhoa.input();
        System.out.println("Khoa toi thieu la : " + timKhoa.timKhoa() + "\n");

        SortedSet<String> khoas = timKhoa.timKhoas();
        System.out.println("Danh sach cac khoa la : ");
        khoas.forEach(k -> System.out.println(k));
    }
}
