
/**
 * @author Dat Vu
 * @date 2022-05-08 08:30 PM
 */

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Iterator;
import java.util.Map;
import java.util.Scanner;
import java.util.SortedSet;
import java.util.TreeMap;
import java.util.TreeSet;

public class BaoDong {
    private Scanner scan = App.scan;
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

                    String newAttrs = "";
                    for (char c : f.get(x).toCharArray()) {
                        reschars.add(c);
                        newAttrs += c;
                    }

                    String preRes = res;
                    res = "";
                    Iterator<Character> c = reschars.iterator();
                    while (c.hasNext()) {
                        res += c.next();
                    }
                    if (!preRes.equals(res)) {
                        fIter = f.keySet().iterator();
                        System.out.println(
                                preRes + " => " + res + " \t|Da them " + newAttrs + " vi " + x + " -> " + f.get(x));
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
        System.setIn(new FileInputStream("baodong.txt"));
        BaoDong baoDong = new BaoDong();
        baoDong.scan = new Scanner(System.in);
        baoDong.input();
        System.out.println("Tim bao dong " + baoDong.getTarget() + " cua tap phu thuoc ham F tren " + baoDong.getAttribute());
        System.out.println("Ket qua: " + baoDong.timBaoDong());
    }
}