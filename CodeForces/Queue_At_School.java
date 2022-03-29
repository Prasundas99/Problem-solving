import java.util.*;

public class Queue_At_School
{
	public static void main (String[] args) throws java.lang.Exception
	{
	   Scanner sc=new Scanner(System.in);  
       int n = sc.nextInt();
       int t = sc.nextInt();
       String st = sc.next();
       char[] ch = st.toCharArray();
       
       for(int i=0; i<t;i++){
           for(int j=0;j<(ch.length-1);j++){
               if(ch[j] == 'B' && ch[j+1] == 'G'){
                   ch[j] = 'G';
                   ch[j+1] = 'B';
                   j++;
               }
           }
       }

       String output = new String(ch);
       System.out.println(output);
	}
}

