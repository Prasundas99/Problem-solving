/*
 4 functions of stdlib.h header file:

1. malloc() : 	allocates single block of requested memory.
2. calloc() :   allocates multiple block of requested memory.
3. realloc():   reallocates the memory occupied by malloc() or calloc() functions.
4. free()   :   frees the dynamically allocated memory.

Calloc() vs malloc()
 It would be better to use malloc over calloc, unless we want the zero-initialization because malloc is faster than calloc. So if we just want to copy some stuff or do something that doesn’t require filling of the blocks with zeros, then malloc would be a better choice.
https://stackoverflow.com/questions/25454358/security-performance-implications-of-malloc-over-calloc
https://stackoverflow.com/questions/1538420/difference-between-malloc-and-calloc


Reference: https://www.javatpoint.com/dynamic-memory-allocation-in-c
*/


/*
Malloc:
The malloc() function allocates single block of requested memory.

It doesn't initialize memory at execution time, so it has garbage value initially.

It returns NULL if memory is not sufficient.

Syntax:
ptr=(cast-type*)malloc(byte-size)  

-----------------------------------------------------------------------------
The calloc() function allocates multiple block of requested memory.

It initially initialize all bytes to zero.

It returns NULL if memory is not sufficient.

The syntax of calloc() function is given below:

ptr=(cast-type*)calloc(number, byte-size)  
-----------------------------------------------------------------------------
realloc() function in C
If memory is not sufficient for malloc() or calloc(), you can reallocate the memory by realloc() function. In short, it changes the memory size.

Let's see the syntax of realloc() function.

ptr=realloc(ptr, new-size)  
--------------------------------------------------------------------------------
free() function in C
The memory occupied by malloc() or calloc() functions must be released by calling free() function. Otherwise, it will consume memory until program exit.

Let's see the syntax of free() function.

free(ptr) 

*/



#include <stdio.h>
//Sum of elements in array
int main(void) {
	int n, i , *ptr, sum =0;
	
	printf("Enter Number of elements:");
	scanf("%d", &n);
	
	ptr = (int*)malloc(n*sizeof(int)); // ptr=(cast-type*)malloc(byte-size)  
	// ptr=(int*)calloc(n,sizeof(int));  //memory allocated using calloc    
	
	if(ptr == NULL){
	    printf("Unable to allocate memory");
	    exit(0);
	}
	
	printf("Enter Elements of array:");
	
	for(i=0; i<n; i++){
	    scanf("%d", ptr+i);
	    sum = *(ptr + i);
	}
	
	printf("%d", sum);
	free(ptr); //Do not forget to do this
	return 0;
}

