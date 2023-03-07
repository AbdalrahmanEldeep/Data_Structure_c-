#include "iostream"
using namespace std;


//===> Our Struct Node
struct Node{
    int data;
    struct Node *next;
};

void Crt_Frst_Nd(Node *head,int value){
  
  head -> data = value; // In this step we create the value held by the first node it points from our head

  head -> next = NULL; // After that we need our firts node points to Null as we dont have any node yet 

}

void Insert_Nw_Nd(Node *head,int value){
    Node *newNode = new Node;

    newNode -> data = value; // Append Data for our new Node
    newNode -> next = NULL; // Make Our New Node Point At Null as it will be the last Node   

    Node *curr = head; // Make shadow from our head to point in last current Node in our List 


    while (curr){
        if(curr -> next == NULL){ // Check if we arrived at the last Node or Not
            curr -> next = newNode; // After that we will insert our node 
            cout << "Your Node Inseted Successfully at location : " << curr-> next << endl;
            return; 
        }
        curr = curr -> next; // make our current stop at our new node 
    }
    
}


Node *Srch_Nd(Node *head,int value){

    Node *curr = head; //Make Shadow from our first element in the node to avoid lost our head

    while(curr){
        if(curr -> data == value){ // check node step by step
            return curr; // return the adrress of our node
        }
        curr = curr -> next; // sheft our shadow element to the next node
    }   

}


void Dlt_Nd(Node *p,Node *head){

   // check if this node is exist or not
   if(p == NULL){
      cout << "This Node Not Exist ! \n";
      return;
   }
   //this special case as this node will be the first node so we need change our head to 
   if(p == head){
      cout << "Node in location : " << head -> next << " Deleted Successfully \n";
      head = p -> next;
      delete p;
      return;
   }


    Node *curr = head;

     while (curr)
     {
       if(curr -> next == p){
          cout << "Node in location : " << curr -> next << " Deleted Successfully \n";
          curr -> next = p -> next; 
          delete p;
       }
       curr = curr -> next;
     }
     
}



int main(){

 Node *head = new Node;

 Crt_Frst_Nd(head,1);

  



}