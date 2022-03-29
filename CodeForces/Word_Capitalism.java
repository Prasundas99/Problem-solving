import java.util.*;

public class Word_Capitalism {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        char[] ch = word.toCharArray();

        ch[0] = Character.toUpperCase(ch[0]);

        String c = new String(ch);
        System.out.println(c);
    }
}
