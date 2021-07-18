/*
Push - This adds a data value to the top of the stack.

Pop - This removes the data value on top of the stack

Peek - This returns the top data value of the stack
*/


#include<iostream>
using namespace  std;
int stack[100], n=100, top=-1;

void push(int val){
    if(top>=n-1){
        cout<<"stackOverflow"<<endl;
    }
    else{
        top++;
        stck[top] = val;
    }
}

void pop(){
    if(top<=-1)
        cout<<"StackUnderflow";
    else{
        cout<<"The Popped element is"<< stack[top]<<endl;
        top--;
    }    
}


void display(){
    if(top>=0){
        cout<<"elements are:";
        for(int i = top; i> 0 ; i--){
            cout<<stack[i]<<" ";
        }
        else    cout<<"Stack is empty";
    }
}

int main(){
    int ch,val;
       cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;

do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
