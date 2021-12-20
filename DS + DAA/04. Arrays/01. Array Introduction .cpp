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

//Array declaration

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


//https://www.geeksforgeeks.org/arrays-in-c-cpp/
//https://www.youtube.com/watch?v=n60Dn0UsbEk&list=PL9gnSGHSqcnr_DxHsP7AW9ftq0AtAyYqJ&index=8&t=648s
	return 0;
}
