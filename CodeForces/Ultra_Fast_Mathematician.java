import java.util.Scanner;

public class Ultra_Fast_Mathematician {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.next();
        String b = sc.next();

        for (int i = 0; i < a.length(); i++) {
            if (a.charAt(i) == b.charAt(i))
                System.out.print(0);
            else
                System.out.print(1);
        }
    }
}
