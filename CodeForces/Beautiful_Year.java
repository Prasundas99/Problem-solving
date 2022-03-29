
import java.util.*;

public class Beautiful_Year {
        public static void main (String[] args) throws java.lang.Exception
        {
            Scanner sc=new Scanner(System.in);  
            int y = sc.nextInt();
            
            while(true){
                y = y+1;
                int a = y/1000;
                int b = y/100%10;
                int c = y/10%10;
                int d = y % 10;
                
                if(a != b && a != c && a != d && b != c && b != d && c != d){
                    break;
                }
            }
            System.out.println(y);
            
        }
}