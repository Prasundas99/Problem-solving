
public class SubSeq {
    public static void main(String[] args) {
        subSequence("", "abc");
    }


    //in recursion
    static void subSequence(String p, String up) {
        if (up.isEmpty()) {
            System.out.println(p);
            return;
        }
        char ch = up.charAt(0);
        subSequence(p + ch, up.substring(1));
        subSequence(p, up.substring(1));
    }
}
