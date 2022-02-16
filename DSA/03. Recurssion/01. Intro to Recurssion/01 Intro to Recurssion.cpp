//Print 1st five natural number 
#include <iostream>
using namespace std;

void print5(int a){
    cout<<a<<endl;
}

void print4(int a){
    cout<<a<<endl;
    print5(5);
}
void print3(int a){
    cout<<a<<endl;
    print4(4);
}

void print2(int a){
    cout<<a<<endl;
    print3(3);
}

void print1(int a){
    cout<<a<<endl;
    print2(2);
}




int printUsingRecurssion(int a){
    
//base condition : Where recurssion will stop making new calls
    if(a == 5){
        cout<<a<<endl;
        return true;
    }
    
    cout<<a<<endl;
    //Recurssive call
    //Each recurssive call is treated as seperated condition in call stack
    printUsingRecurssion(a+1);
}



int main() {
	//Function without recurssion
	print1(1);
	
	cout<<"--------Function using recurssion---------"<<endl;
	//Function using recurssion
	printUsingRecurssion(1);
	return 0;
}

/*
Function Calling itself is called recurssion

It helps to solve bigger complex problem in simpler way