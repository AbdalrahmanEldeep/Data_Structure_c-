#include "iostream"
using namespace std;


struct Node{
    int data;
    struct Node *next;
};


void create_first_node(Node *head,int data){
    head -> data = data;
    head -> next = NULL;
}



void insert_New_Node(Node *&head,int data){
    Node *newNode = new Node;

   newNode -> data = data;

   newNode -> next = NULL;

   Node *curr = head;

   while(curr != NULL){
      if(curr -> next == NULL){
        curr -> next = newNode;
        return;
      }
      curr = curr -> next;
   }

}

void display_Nodes(Node *head){
    Node *curr = head;

    while (curr){
        cout << curr -> data << " || " << curr -> next << endl;
        
        curr = curr -> next;
    }
     
}

Node *Search(Node *head,int data){
    Node *curr = head;

    while (curr){
      
       if(curr -> data == data){
           return curr;
       }

       curr = curr -> next;

    }
    
} 

bool Delete(Node *p,Node *&head){
     if(p == NULL){
        cout << "No Node found in the list to delete\n";
        return false;
     }

     if(p == head){
        head -> next = p -> next;
        delete p;
        cout <<  << "Node Deleted Successfully\n";
        return true;
     }
}


int main(){
 
 Node *head = new Node;
 
 create_first_node(head,3);
 insert_New_Node(head,4);
 insert_New_Node(head,4);
 insert_New_Node(head,4);
 insert_New_Node(head,4);
 insert_New_Node(head,4);
 cout <<  "Your Element Located in address : " << Search(head,3) << endl;
 display_Nodes(head);




}
