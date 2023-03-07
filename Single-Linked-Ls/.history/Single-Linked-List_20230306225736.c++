#include "iostream"
using namespace std;


//===> Our Struct Node
struct Node{
    int data;
    struct Node *next;
};

void Crt_Fr_Nd(Node *head,int value){
  
  head -> data = value; // In this step we create the value held by the first node it points from our head

  head -> next = NULL; // After that we need our firts node points to Null as we dont have any node yet 

}

void Insert_Nw_Nd(Node *head,int value){
    Node *newNode = new Node;

    newNode -> data = value; // Append Data for our new Node
    newNode -> next = NULL; // Make Our New Node Point At Null as it will be the las

    Node *curr = head;


    while (curr){
        if(curr -> next == NULL){
            curr -> next = newNode;
            cout << "Your Node Inseted Successfully at location : " << curr-> next << endl;
            return; 
        }
        curr = curr -> next;
    }
    
}


int main(){




}