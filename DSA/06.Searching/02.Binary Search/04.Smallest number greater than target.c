char nextGreatestLetter(char* letters, int lettersSize, char target){
int start = 0;
int end = lettersSize-1;

    while(start<=end){
        int mid = start + (end-start)/2;
        
        if(letters[mid]<=target)
            start = mid+1;
        else
            end = mid-1;
    }
    
    return letters[start % lettersSize];
}