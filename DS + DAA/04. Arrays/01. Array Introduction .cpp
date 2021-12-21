#include <iostream>
using namespace std;

int main() {
//Why use Array
	//Store roll no of "a"
	int a = 69;
	//store name of a student
	string name = "Prasun Das";
	
	//Store 5 roll nos
	int roll1 = 1;
	int roll2 = 2;
	int roll3 = 3;
	int roll4 = 1;
	int roll5 = 1;
	
	/*
	What if we had to store 500 roll number...
	It will make more sense to have a data Structure here. So array come to play
	
	What is array?
	Collection of homogeneous data type

    Syntax in c and cpp:
    DataType arrayName[size of array]
    
	*/

//Array declaration (static size)

// Array declaration by specifying size
int arr1[10];
 
// With recent C/C++ versions, we can also
// declare an array of user specified size
int n = 10;
int arr2[n];

// Array declaration by initializing elements
int arr[] = { 10, 20, 30, 40 }
 
// Compiler creates an array of size 4.
// above is same as  "int arr[4] = {10, 20, 30, 40}"


// Array declaration by specifying size and initializing
// elements
int arr[6] = { 10, 20, 30, 40 }
 
// Compiler creates an array of size 6, initializes first
// 4 elements as specified by user and rest two elements as
// 0. above is same as  "int arr[] = {10, 20, 30, 40, 0, 0}"


//Array Decleration (Dynamic Sized array)
//Follow 02. Dynamic allocation in array.c

/*
Advantages of an Array in C/C++:  
Random access of elements using array index.
Use of less line of code as it creates a single array of multiple elements.
Easy access to all the elements.
Traversal through the array becomes easy using a single loop.
Sorting becomes easy as it can be accomplished by writing less line of code.


Disadvantages of an Array in C/C++: 
Allows a fixed number of elements to be entered which is decided at the time of declaration. Unlike a linked list, an array in C is not dynamic.
Insertion and deletion of elements can be costly since the elements are needed to be managed in accordance with the new memory allocation.



Accessing Array Elements: 
Array elements are accessed by using an integer index. Array index starts with 0 and goes till size of array minus 1.
Name of the array is also a pointer to the first element of array.



Ref Link: 
https://www.geeksforgeeks.org/arrays-in-c-cpp/
https://www.geeksforgeeks.org/new-and-delete-operators-in-cpp-for-dynamic-memory/
https://stackoverflow.com/questions/4029870/how-to-create-a-dynamic-array-of-integers
https://www.tutorialspoint.com/data_structures_algorithms/array_data_structure.htm

*/

return 0;
}
