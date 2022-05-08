import java.util.Iterator;
import java.util.SortedSet;
import java.util.TreeSet;

public class SubArr {
    public static void main(String[] args) {
        SortedSet<Integer> s = new TreeSet<>();

        s.add(1);
        s.add(2);
        s.add(3);
        s.add(4);

        Iterator<Integer> i = s.iterator();

        boolean x = true;
        while (i.hasNext()) {
            System.out.println(i.next());
            if (x) {
                i = s.iterator();
                x = false;
            }
        }
    }
}
