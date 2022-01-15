public /* package codechef; // don't place package name! 
****
***
**
*

*/




import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		triangle(4,0);
	}
	
	static void triangle(int r , int c){
	    if(r == 0){
	        return;
	    }
	    if(c<r){
	        System.out.print("*");
	        triangle(r, c+1);
	    }else{
	        System.out.println();
	        triangle(r-1, 0);
	    }
	}
}

