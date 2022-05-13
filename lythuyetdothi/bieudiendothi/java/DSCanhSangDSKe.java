import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Scanner;

public class DSCanhSangDSKe {

    public static Scanner scan;
    public static int soDinh;
    public static int soCanh;
    public static Map<String, List<String>> g = new HashMap<>();
    public static Map<String, Boolean> visited = new HashMap<>();

    public static void dfs(String v) {
        System.out.print(v + " ");
        visited.replace(v, true);
        for (String x : g.get(v)) {
            if (!visited.get(x)){
                dfs(x);
            }
        }
    }

    public static void input() {
        soDinh = scan.nextInt();
        soCanh = scan.nextInt();
        for (int i = 0; i < soCanh; i++) {
            String dinh1 = String.valueOf(scan.nextInt());
            String dinh2 = String.valueOf(scan.nextInt());
            if (!g.containsKey(dinh1)) {
                g.put(dinh1, new ArrayList<>());
                visited.put(dinh1, false);
                System.out.println("ok");
            }
            if (!g.containsKey(dinh2)) {
                g.put(dinh2, new ArrayList<>());
                visited.put(dinh2, false);
                System.out.println("ok");
            }
            g.get(dinh1).add(dinh2);
            g.get(dinh2).add(dinh1);
        }
        g.forEach((k, v) -> {
            System.out.print(k + ": ");
            v.forEach(o -> System.out.print(o + " "));
            System.out.println();
        });
        System.out.println("successful!!!\n");
    }

    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("C:/workspace/28tech/lythuyetdothi/bieudiendothi/input/dscanhsangdske.txt"));
        scan = new Scanner(System.in);
        input();
        dfs("1");
    }
}