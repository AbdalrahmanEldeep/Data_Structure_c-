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

   while(curr != N)

}

int main(){
 
 Node *head = new Node;




}
