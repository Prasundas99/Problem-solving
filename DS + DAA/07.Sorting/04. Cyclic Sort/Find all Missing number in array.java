/*
Given an array nums of n integers where nums[i] is in the range [1, n], return an array of all the integers in the range [1, n] that do not appear in nums.

 

Example 1:

Input: nums = [4,3,2,7,8,2,3,1]
Output: [5,6]
Example 2:

Input: nums = [1,1]
Output: [2]
*/

class Solution {
    public List<Integer> findDisappearedNumbers(int[] arr) {
        int i=0;
	    while(i< arr.length){
	        int correctIndex = arr[i] -1;
	        if(arr[i] != arr[correctIndex])
	            swap(arr, i , correctIndex);
	        else
	            i++;
	    }
        
        List<Integer> ans = new ArrayList<>();
        for(i = 0 ; i<arr.length; i++){
           if(arr[i] != (i+1))
                ans.add(i+1);
        }
        
        
        return ans;
    }
    

	
	
	static void swap(int[] arr, int index, int correctIndex){
	    int temp = arr[index];
	    arr[index] = arr[correctIndex];
	    arr[correctIndex] = temp;
	}
}