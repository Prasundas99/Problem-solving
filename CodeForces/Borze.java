import java.util.*;

public class Borze {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        String n = sc.nextLine();
        char[] c = n.toCharArray();
        int index = 0;
        while (index < c.length) {
            if (c[index] == '.') {
                System.out.print("0");
            }
            if (c[index] == '-' && c[index + 1] == '.') {
                System.out.print("1");
                index++;
            }
            if (c[index] == '-' && c[index + 1] == '-') {
                System.out.print("2");
                index++;
            }
            index++;
        }

    }

}
