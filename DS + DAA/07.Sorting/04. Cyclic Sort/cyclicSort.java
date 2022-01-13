//Cyclic sort

import java.util.*;
import java.lang.*;
import java.io.*;


class CyclicSort
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int arr[] = {3,5,1,4,2};
		sort(arr);
		System.out.println(Arrays.toString(arr));
	}
	
	static void sort(int[] arr){
	    int i=0;
	    while(i< arr.length){
	        int correctIndex = arr[i] -1;
	        if(arr[i] != arr[correctIndex]){
	            swap(arr, i , correctIndex);
	        }else{
	            i++;
	        }
	    }
	}
	
	
	static void swap(int[] arr, int index, int correctIndex){
	    int temp = arr[index];
	    arr[index] = arr[correctIndex];
	    arr[correctIndex] = temp;
	}
	
}
