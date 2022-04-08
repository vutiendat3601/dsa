import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.util.Arrays;
import java.util.Scanner;

public class hello {
    public static void main(String[] args) throws FileNotFoundException {
        System.setIn(new FileInputStream("./graph/input/hello.txt"));
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int [] a =new int[n];
        for (int i=0;i<n;i++) {
            a[i] = sc.nextInt();
        }
        System.out.println(Arrays.toString(a));
        sc.close();
    }
}