import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int[] arr = {4,8,9,2,6};
	    int r = arr.length-1;
		sellectionSort(arr,r,0);
		System.out.println(Arrays.toString(arr));
	}
	
	static void sellectionSort(int[] arr, int r , int c, int max){
	    if(r == 0){
	        return;
	    }
	    if(c<r){
	        if(arr[c] > arr[max]){
	            sellectionSort(arr,r, c+1, c);
	        }else{
	            sellectionSort(arr,r, c+1, max);    
	        }
	        
	    }else{
	        int temp = arr[max];
	            arr[r-1] = arr[max];
	            arr[max] = temp;
	        sellectionSort(arr, r-1, 0);
	    }
	}
}
