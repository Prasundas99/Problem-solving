/*
Given a characters array letters that is sorted in non-decreasing order and a character target, return the smallest character in the array that is larger than target.

Note that the letters wrap around.

For example, if target == 'z' and letters == ['a', 'b'], the answer is 'a'.
 

Example 1:

Input: letters = ["c","f","j"], target = "a"
Output: "c"
Example 2:

Input: letters = ["c","f","j"], target = "c"
Output: "f"
Example 3:

Input: letters = ["c","f","j"], target = "d"
Output: "f"
*/

char nextGreatestLetter(char* letters, int lettersSize, char target){
int start = 0;
    int end = lettersSize-1;
    
    while(start<=end){
        int mid = start + (end-start)/2;
        
        if(letters[mid] <= target) start = mid + 1;
        else end = mid - 1;
    }
    return letters[start % lettersSize];
}