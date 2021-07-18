#include<iostream>
using namespace std;
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
//Initializing the head as null to say the linked list is empty
struct Node* head = NULL;

//Function to insert new data to linked list
void insert(int newdata) {
   struct Node* newnode = (struct Node*) malloc(sizeof(struct Node));  ///Creation of new node
   newnode->data = newdata;
   newnode->prev = NULL;
   newnode->next = head;
   if(head != NULL)
   head->prev = newnode ;
   head = newnode;
}

//delete from begining
void deleteFromBegining(){
   struct Node* temp;
   if(head==NULL){
      cout<<"List is empty";
   }
   else if(head -> next = NULL){
      temp = head;
      head = NULL;
   } //If the linked list have only one value
   else{
      temp = head;
      head = temp -> next;
   }
   free(temp);
}

//Delete from specific position
void deleteAtAny(){
   int count = 1;
   if(pos<=0 || (pos>= count && head == NULL))
         cout<< "Invalid";
   else if(pos == 1 && head != NULL){
      temp = head;
      head = head -> next;
      free(temp);
   }
   else{
      node *t = head, *prev;
      while(t -> next != NULL && count<pos){
         prev = t;
         t = t-> next;
         count++;
      }
      if(pos>count) cout<<"Invalid";
      else
         prev -> next = t -> next;
         temp = t;
         free(temp);
   }
}



//Displaying linked list
void display() {
   struct Node* ptr;
   ptr = head;
   while(ptr != NULL) {
      cout<< ptr->data <<" ";
      ptr = ptr->next;
   }
}
int main() {
   insert(3);
   insert(1);
   insert(7);
   insert(2);
   insert(9);
   cout<<"The doubly linked list is: ";
   display();
   return 0;
}