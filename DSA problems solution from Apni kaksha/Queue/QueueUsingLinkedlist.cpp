#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}

struct node* front = NULL;
struct node* rear = NULL;


void Insert(){
    int val;
    cin >> val;

    if(rear == NULL){
        rear = (struct node *)malloc(sizeof(struct node));
        rear -> next = NULL;
        rear -> data = val;
        front = rear;
    }
    else{
        temp = (struct node *)malloc(sizeof(struct node));
        rear -> next = temp;
        temp -> data = val;
        rear = temp;
    }
}
void Delete() {
if(front==NULL)
return -1;
int x=front->data;
front=front->next;
return x;
}
void Display() {
   temp = front;
   if ((front == NULL) && (rear == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"Queue elements are: ";
   while (temp != NULL) {
      cout<<temp->data<<" ";
      temp = temp->next;
   }
   cout<<endl;
}
int main() {
   int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      switch (ch) {
         case 1: Insert();
         break;
         case 2: Delete();
         break;
         case 3: Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}