import java.lang.reflect.Array;
import java.util.Arrays;
import java.util.Scanner;

public class Prime_Construction {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.nextLine();
        int[] num = Arrays.stream(s.split(" ")).mapToInt(Integer::parseInt).toArray();
        Arrays.sort(num);
        int pd_minNumber = num[0];

        if(num.length == 1) {
            if (isPrime(pd_minNumber)) {
                System.out.print(pd_minNumber);
            } else {
                System.out.print("None");
            }
            return;
        }
 //create an array of int pd_num_new and and remove 1st element from num and add all to new array
        int[] pd_num_new = new int[num.length - 1];
        for (int i = 0; i < pd_num_new.length; i++) {
            pd_num_new[i] = num[i + 1];
        }


        int pd_lcm = lcm(pd_num_new);

        int pd_final = pd_minNumber + pd_lcm;

        if (isPrime(pd_final)) {
            System.out.print(pd_final);
        } else {
            System.out.print("None");
        }

    }

    public static boolean isPrime(int pd_n) {
        if (pd_n == 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(pd_n); i++) {
            if (pd_n % i == 0) {
                return false;
            }
        }
        return true;
    }

    public static int lcm(int[] pd_num) {
        int lcm = pd_num[0];
        for (int i = 1; i < pd_num.length; i++) {
            lcm = lcm * pd_num[i] / gcd(lcm, pd_num[i]);
        }
        return lcm;
    }

    public static int gcd(int lcm, int pd_num) {
        int gcd = 1;
        for (int i = 1; i <= lcm; i++) {
            if (lcm % i == 0 && pd_num % i == 0) {
                gcd = i;
            }
        }
        return gcd;
    }
}
