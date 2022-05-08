
/**
 * @author Dat Vu
 * @date 2022-05-08 08:30 PM
 */

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.SortedSet;
import java.util.TreeMap;
import java.util.TreeSet;

public class BaoDong {
    private Scanner scan = new Scanner(System.in);
    // Attriubutes
    private String attribute;
    private Map<String, String> f;
    private String target;

    // Getters, setters

    public String getAttribute() {
        return attribute;
    }

    public void setAttribute(String attribute) {
        this.attribute = attribute;
    }

    public Map<String, String> getF() {
        return f;
    }

    public void setF(Map<String, String> f) {
        this.f = f;
    }

    public String getTarget() {
        return target;
    }

    public void setTarget(String target) {
        this.target = target;
    }

    // Constructors
    public BaoDong() {
        f = new TreeMap<>();
    }

    // Bussiness code

    public String timBaoDong() {
        String res = target;
        Iterator<String> fIter = f.keySet().iterator();

        while (fIter.hasNext()) {
            String x = fIter.next();
            if (x.length() <= res.length()) {
                SubcharArrs genSubchar = new SubcharArrs(res, x.length());
                genSubchar.genSubcharArrs();
                SortedSet<String> subchars = genSubchar.getRes();
                if (subchars.contains(x)) {
                    SortedSet<Character> reschars = new TreeSet<>();
                    for (char c : res.toCharArray()) {
                        reschars.add(c);
                    }
                    for (char c : f.get(x).toCharArray()) {
                        reschars.add(c);
                    }
                    String preRes = res;
                    res = "";
                    Iterator<Character> c = reschars.iterator();
                    while (c.hasNext()) {
                        res += c.next();
                    }
                    if (!preRes.equals(res)) {
                        fIter = f.keySet().iterator();
                    }
                }
            }
        }
        return res;
    }

    public void input() {
        attribute = scan.nextLine();
        int numOfF = scan.nextInt();
        for (int i = 0; i < numOfF; i++) {
            String left = scan.next();
            String right = scan.next();
            f.put(left, right);
        }
        target = scan.next();
    }

    // Main
    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("timkhoa.txt"));
        BaoDong t = new BaoDong();
        t.input();
        System.out.println(t.timBaoDong());
    }
}