import java.util.*;

public class Main {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();

        if(n % 2 == 1){
            System.out.println(-1);
            return;
        }

        for(int i=1; i<n+1; i++){
            if(i%2 == 1){
                System.out.print(i+1);
                System.out.print(" ");
                continue;
            }else{
                System.out.print(i-1);
                System.out.print(" ");
                continue;
            }
        }

    }
}
