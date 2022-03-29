import java.util.Scanner;

public class Panoramix_Prediction {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int first = sc.nextInt();
        int second = sc.nextInt();

        // System.out.println(getNextPrime(first));
        if (getNextPrime(first) == second)
            System.out.println("YES");
        else
            System.out.println("NO");
    }

    static int getNextPrime(int n) {
        ++n;
        int prime = 0;
        if (n % 2 == 0) {
            n = n + 1;
        }
        for (int i = n; i < n * 2; i++) {
            if (isPrime(i)) {
                prime = i;
                break;
            }
            ++i;
        }
        return prime;
    }

    static boolean isPrime(int n) {
        if (n <= 1) {
            return false;
        }
        for (int i = 2; i < n / 2; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}
