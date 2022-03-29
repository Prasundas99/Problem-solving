
import java.util.*;
import java.io.*;

public class Young_Physist {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        int a = 0, b = 0, c = 0;
        for (int i = 1; i <= (3 * n); i++) {

            int temp = sc.nextInt();
            if (i % 3 == 1) {
                a = a + temp;
            }
            if (i % 3 == 2) {
                b = b + temp;
            }
            if (i % 3 == 0) {
                c = c + temp;
            }
        }
        if (a == 0 && b == 0 && c == 0)
            System.out.println("YES");
        else
            System.out.println("NO");
    }
}