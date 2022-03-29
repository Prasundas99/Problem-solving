import java.util.*;

public class Beautiful_Matrix
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc=new Scanner(System.in);  
		int x=3,y=3;
		
		for(int i=0;i<5; i++){
		    for(int j=0; j<5; j++){
		        int z = sc.nextInt();
		        if(z == 1){
		            x = i;
		            y = j;
		        }
		    }
		}
		
		int c = Math.abs(x-3+1)  + Math.abs(y -3+1);
		
		System.out.println(c);
	}
}
