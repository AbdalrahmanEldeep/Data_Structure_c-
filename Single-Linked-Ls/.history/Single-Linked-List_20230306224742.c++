#include "iostream"
using namespace std;


//===> Our Struct Node
struct Node{
    int data;
    struct Node *next;
}

void Crt_Fr_Nd(Node *head,int value){
  
  head -> data = value; // In this step we create the value held by the first node it points from our head

  head -> next = NULL; // After that we need our firts node points to 

}



int main(){




}