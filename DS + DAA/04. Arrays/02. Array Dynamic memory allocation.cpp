/*
What is a Dynamic Array?
A dynamic array is quite similar to a regular array, but its size is modifiable during program runtime. DynamArray elements occupy a contiguous block of memory.

Once an array has been created, its size cannot be changed. However, a dynamic array is different. A dynamic array can expand its size even after it has been filled.

During the creation of an array, it is allocated a predetermined amount of memory. This is not the case with a dynamic array as it grows its memory size by a certain factor when there is a need.


Factors impacting performance of Dynamic Arrays
The array’s initial size and its growth factor determine its performance. Note the following points:

If an array has a small size and a small growth factor, it will keep on reallocating memory more often. This will reduce the performance of the array.
If an array has a large size and a large growth factor, it will have a huge chunk of unused memory. Due to this, resize operations may take longer. This will reduce the performance of the array.
*/


/*
In C++, memory is divided into two parts -

Stack - All the variables that are declared inside any function take memory from the stack.
Heap - It is unused memory in the program that is generally used for dynamic memory allocation.



*/

#include <iostream>
using namespace std;

int main() {
cout<<"Enter a positive integer";
int length;
cin>>length;

//syntax of new operator:  new data-type;
int* array{new int[length]}; // use array new.  Note that length does not need to be constant!

cout << "I just allocated an array of integers of length " << length << '\n';

    array[0] = 5; // set element 0 to value 5

    delete[] array; // use array delete to deallocate array

    // we don't need to set array to nullptr/0 here because it's going to go out of scope immediately after this anyway
	
	return 0;
}
