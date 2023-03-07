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




int main(){
 
 Node *head = new Node;

 int age = 30;

//  cout << "Enter your age : ";

//  cin >> age;

 create_first_node(head,age);

//  cout << "Your Age is : " <<  "->" <<  head -> data;
    any
    cout << ( == NULL);


}
