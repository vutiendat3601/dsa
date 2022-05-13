import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Test {

    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("d.txt"));
        Scanner scan = new Scanner(System.in);
        String s1 = scan.next();
        String s2 = scan.next();
        String s3 = scan.next();
        String s4 = scan.next();
        String s5 = scan.next();
        String s6 = scan.next();
        System.out.print(s1 + " ");
        System.out.print(s2 + " ");
        System.out.print(s3 + " ");
        System.out.print(s4 + " ");
        System.out.print(s5 + " ");
        System.out.print(s6 + " ");
    }
}
