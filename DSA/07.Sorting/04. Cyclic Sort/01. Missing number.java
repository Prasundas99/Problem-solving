//https://leetcode.com/problems/missing-number
class Solution {
    public int missingNumber(int[] arr) {
        int l = arr.length;
        
        int i = 0;
        while(i<l){
            if(arr[i] < l &&  arr[arr[i]] != arr[i]){
                int temp = arr[i];
                arr[i] = arr[arr[i]];
                arr[temp] = temp;
            }else{
               i++; 
            }
        }
        
for (int index = 0; index < arr.length; index++) {
            if (arr[index] != index) {
                return index;
            }
        }

        // case 2
        return arr.length;
    }
    }