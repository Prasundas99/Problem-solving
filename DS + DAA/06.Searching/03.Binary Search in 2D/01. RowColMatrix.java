import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class RowColMatrix
{
	public static void main (String[] args) throws java.lang.Exception
	{ //Sorted in row col manner
		int[][] arr = {
		    {10,20,30,40},
		    {15,25,35,45},
		    {28,29,37,49},
		    {33,34,38,50}
		};
		int target = 37;
		System.out.println(Arrays.toString(search(arr, target)));
	}

    static int[] search(int[][] matrix, int target){
        int r = 0;
        int c = matrix.length-1;
        
        while(r< matrix.length && c >=0){
            if(matrix[r][c] == target){
                return new int[]{r,c};
            }
            if(matrix[r][c] < target){
                r++;
            }else{
                c--;
            }
        }
        return new int[]{-1,-1};
    }
    
}


