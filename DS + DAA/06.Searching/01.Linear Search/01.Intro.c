/*
Linear search is also called as sequential search algorithm. It is the simplest searching algorithm. In Linear search, we simply traverse the list completely and match each element of the list with the item whose location is to be found. If the match is found, then the location of the item is returned; otherwise, the algorithm returns NULL.

1. Time Complexity

Best Case	O(1)
Average Case	O(n)
Worst Case	O(n)

Space Complexity
Space Complexity	O(1)
*/

#include <stdio.h>  
int linearSearch(int a[], int n, int val) {  
  // Going through array sequencially  
  for (int i = 0; i < n; i++)  
    {  
        if (a[i] == val)  
        return i+1;  
    }  
  return -1;  
}  
int main() {  
  int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52}; // given array  
  int val = 41; // value to be searched  
  int n = sizeof(a) / sizeof(a[0]); // size of array  
  int res = linearSearch(a, n, val); // Store result  
  printf("The elements of the array are - ");  
  for (int i = 0; i < n; i++)  
  printf("%d ", a[i]);   
  printf("\nElement to be searched is - %d", val);  
  if (res == -1)  
  printf("\nElement is not present in the array");  
  else  
  printf("\nElement is present at %d position of array", res);  
  return 0;  
}  