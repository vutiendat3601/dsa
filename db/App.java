import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class App {

    public static Scanner scan;

    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("baodong.txt"));
        scan = new Scanner(System.in);
        // TimKhoa timKhoa = new TimKhoa();
        // timKhoa.input();
        // // System.out.println("Khoa toi thieu la : " + timKhoa.timKhoa() + "\n");

        // SortedSet<String> khoas = timKhoa.timKhoas();
        // System.out.println("Danh sach cac khoa la : ");
        // khoas.forEach(k -> System.out.println(k));
        BaoDong baoDong = new BaoDong();
        baoDong.input();
        System.out.println("Tim bao dong " + baoDong.getTarget() + " cua tap phu thuoc ham F tren " + baoDong.getAttribute());
        System.out.println("Ket qua: " + baoDong.timBaoDong());
    }
}
