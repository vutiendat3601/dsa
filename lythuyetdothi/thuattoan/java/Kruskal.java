import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Scanner;
import java.util.Set;

public class Kruskal {

    // Attributes

    public static Scanner scan;
    public static int soDinh;
    public static int soCanh;
    public static List<Tree<String, String, Integer>> trees;
    public static Set<String> vertices;
    public static Map<String, String> parents;
    public static Map<String, Integer> size;

    // Bussiness code

    public static void input() {
        trees = new ArrayList<>();
        vertices = new HashSet<>();

        soDinh = scan.nextInt();
        soCanh = scan.nextInt();
        for (int i = 0; i < soCanh; i++) {
            String dinh1 = scan.next();
            String dinh2 = scan.next();
            int trongSo = scan.nextInt();
            trees.add(new Tree<>(dinh1, dinh2, trongSo));
        }
        Collections.sort(trees);
        trees.forEach(o -> {
            System.out.println(o.u + " " + o.v + " " + o.w);
            vertices.add(o.u);
            vertices.add(o.v);
        });
        System.out.println();
    }

    public static void makeSet() {
        parents = new HashMap<>();
        size = new HashMap<>();
        for (String v : vertices) {
            parents.put(v, v);
            size.put(v, 1);
        }
    }

    public static String find(String v) {
        if (v.equals(parents.get(v))) {
            return v;
        }
        parents.put(v, find(parents.get(v)));
        return parents.get(v);
    }

    public static boolean unite(String a, String b) {
        a = find(a);
        b = find(b);
        if (a.equals(b)) {
            return false;
        }
        if (size.get(a) >= size.get(b)) {
            parents.put(b, a);
        } else {
            parents.put(a, b);
        }
        return true;
    }

    public static void kruskal() {
        List<Tree<String, String, Integer>> mst = new ArrayList<>();
        int d = 0;
        for (Tree<String, String, Integer> x : trees) {
            if (mst.size() == soDinh - 1) {
                break;
            }
            if (unite(x.u, x.v)) {
                mst.add(x);
                d += x.w;
            }
        }
        System.out.println(d);
        mst.forEach(o -> {
            System.out.println(o.u + " " + o.v + " " + o.w);
        });
    }

    // Main
    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("kruskal.txt"));
        scan = new Scanner(System.in);
        input();
        makeSet();
        kruskal();
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

class Tree<T, U, V extends Number> implements Comparable<Tree<T, U, ? extends Number>> {
    public T u;
    public U v;
    public V w;

    public Tree(T u, U v, V w) {
        this.u = u;
        this.v = v;
        this.w = w;
    }

    @Override
    public int compareTo(Tree<T, U, ? extends Number> o) {
        return Double.compare(w.doubleValue(), o.w.doubleValue());
    }
}