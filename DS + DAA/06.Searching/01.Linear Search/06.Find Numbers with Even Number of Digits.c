#include <iostream>
using namespace std;
//Brute force
int check1(int* nums, int numsSize){
    int count = 0;
    for(int i=0 ; i<numsSize; i++){
        int temp = nums[i];
                    int c=0;
        while(temp>0){
            c ++;
            temp = temp/10;
            
            if(temp<=0){
                printf("%d", c);
                if(c%2 == 0){
                    count++;
                }
            }
        }
    }
    return count;
}


//Optimised solution
int check2(int* nums, int numsSize){
           int count =0;
       if(nums[i]<0){
           return -1;
       }
       
       count =  log(nums[i]+1); //Refer number system
       if(count%2 == 0){
           count++;
       } 
}

int main() {
    int numsSize = 5;
    int nums[numsSize] = {12,345,2,6,7896};
    int count = check1(nums, numsSize);
	return 0;
}
