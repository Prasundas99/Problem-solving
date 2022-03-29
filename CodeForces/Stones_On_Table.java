import java.util.Scanner;

public class Stones_On_Table {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int counter = 0;

        int n = sc.nextInt();
        String s = sc.next();
        char [] ch = s.toCharArray();
        for(int i=1; i<ch.length; i++){
            if(ch[i] == ch[i-1]){
                counter++;
            }
        }

            System.out.println(counter);

       
    }
}
