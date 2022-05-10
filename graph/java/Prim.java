import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class Prim {
    // Attributes

    public static Scanner scan;
    public static int soDinh;
    public static int soCanh;
    public static Map<String, List<Pair<String, Integer>>> g;
    public static Map<String, Boolean> used;

    // Bussiness code

    public static void input() {
        g = new HashMap<>();
        used = new HashMap<>();
        soDinh = scan.nextInt();
        soCanh = scan.nextInt();
        for (int i = 0; i < soCanh; i++) {
            String dinh1 = scan.next();
            String dinh2 = scan.next();
            int trongSo = scan.nextInt();
            if (!g.containsKey(dinh1)) {
                g.put(dinh1, new ArrayList<>());
                used.put(dinh1, false);
            }
            if (!g.containsKey(dinh2)) {
                g.put(dinh2, new ArrayList<>());
                used.put(dinh2, false);
            }
            g.get(dinh1).add(new Pair<>(dinh2, trongSo));
            g.get(dinh2).add(new Pair<>(dinh1, trongSo));
        }
        traverG();
    }

    public static void traverG() {
        g.forEach((k, v) -> {
            System.out.print(k + ": ");
            v.forEach(x -> System.out.print(x.first + " " + x.second + "| "));
            System.out.println();
        });
    }

    public static void prim(String u) {
        List<Tree<String, String, Integer>> mst = new ArrayList<>();
        int d = 0;
        used.replace(u, true);
        while (mst.size() != soDinh - 1) {
            Iterator<String> vKeys = g.keySet().iterator();
            int min_w = Integer.MAX_VALUE;
            String X = "", Y = "";
            while (vKeys.hasNext()) {
                String i = vKeys.next();
                if (used.get(i)) {
                    for (Pair<String, Integer> it : g.get(i)) {
                        String j = it.first;
                        int trongSo = it.second;
                        if (!used.get(j) && trongSo < min_w) {
                            min_w = trongSo;
                            X = j;
                            Y = i;
                        }
                    }
                }
            }
            mst.add(new Tree<>(X, Y, min_w));
            d += min_w;
            used.replace(X, true);
        }
        System.out.println("Tong trong so la " + d);
        mst.forEach(e -> {
            System.out.println(e.first + " " + e.second + " " + e.w);
        });
    }

    // Main
    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("prim.txt"));
        scan = new Scanner(System.in);
        input();
        String start = g.keySet().iterator().next();
        prim(start);
    }
}

class Pair<T, U> {
    public T first;
    public U second;

    public Pair(T first, U second) {
        this.first = first;
        this.second = second;
    }
}

class Tree<T, U, V> {
    public T first;
    public U second;
    public V w;

    public Tree(T first, U second, V w) {
        this.first = first;
        this.second = second;
        this.w = w;
    }
}