import java.util.SortedSet;
import java.util.TreeSet;

public class SubcharArrs {

    // Attributes
    private String src;
    private SortedSet<String> res;
    private int[] subIndices;
    private int subLen;

    // Getters, setters

    public SortedSet<String> getRes() {
        return res;
    }

    // Constructors

    public SubcharArrs() {
        src = "";
        init();
    }

    public SubcharArrs(String src, int subLen) {
        this.src = src;
        this.subLen = subLen;
        init();
    }

    private void init() {
        res = new TreeSet<>();
        subIndices = new int[subLen + 1];
    }

    public void genSubcharArrs() {
        genSubcharArrs(1);
    }

    private void addToRes() {
        StringBuilder subcharRes = new StringBuilder();
        for (int i = 1; i <= subLen; i++) {
            subcharRes.append(src.charAt(subIndices[i] - 1));
        }
        res.add(subcharRes.toString());
    }

    private void genSubcharArrs(int iTh) {
        for (int i = subIndices[iTh - 1] + 1; i <= src.length() - subLen + iTh; i++) {
            subIndices[iTh] = i;
            if (iTh == subLen) {
                addToRes();
            } else {
                genSubcharArrs(iTh + 1);
            }
        }
    }

    public static void main(String[] args) {
        SubcharArrs sub = new SubcharArrs("V", 1);
        sub.genSubcharArrs();
        sub.getRes().forEach(o -> {
            System.out.println(o);
        });
        ;
    }
}
