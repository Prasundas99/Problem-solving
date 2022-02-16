import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int[] arr = {4,8,9,2,6};
	    int r = arr.length-1;
		BubbleSort(arr,r,0);
		System.out.println(Arrays.toString(arr));
	}
	
	static void BubbleSort(int[] arr, int r , int c){
	    if(r == 0){
	        return;
	    }
	    if(c<r){
	        if(arr[c] > arr[c+1]){
	            int temp = arr[c];
	            arr[c] = arr[c+1];
	            arr[c+1] = temp;
	        }
	        BubbleSort(arr,r, c+1);
	    }else{
	        BubbleSort(arr, r-1, 0);
	    }
	}
}
