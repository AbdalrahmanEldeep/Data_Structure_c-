//=========== Black Wolf =====================>
#include "iostream"
using namespace std;

class LinkedList
{

private:
   struct Node
   {
      int data;
      Node *next;
      Node *prev;

      Node()
      {
         next = NULL;
         prev = NULL;
         data = 0;
      }
   };
   Node *head = NULL;
   Node *end =  NULL;
   void Ui(){
    cout << "Welecome at my program I made this program with Double linked List\n";
    cout << endl;

    cout << R"(

   Made by Black Wolf
                        ,     ,
                        |\---/|
                       /  , , |
                  __.-'|  / \ /
         __ ___.-'        ._O|
      .-'  '        :      _/
     / ,    .        .     |
    :  ;    :        :   _/
    |  |   .'     __:   /
    |  :   /'----'| \  |
    \  |\  |      | /| |
     '.'| /       || \ |
     | /|.'       '.l \\_
   || ||             '-'

    )";

}
public:

   LinkedList(){
      cout << endl;
      Ui();
   }
   void append(int newValue)
   {
      Node *newNode = new Node;
      newNode->data = newValue;

      if (head == NULL)
      {
         head = newNode;
         end = newNode;
         cout << endl;
         cout << "Element appended successfully -> " << head->next << endl;
         cout << endl;
      }
      else
      {
         Node *curr = head;
         while (curr->next != NULL)
         {
            curr = curr->next;
         }
         curr->next = newNode;
         newNode->prev = curr;
         end = newNode;
         cout << endl;
         cout << "Element appended successfully -> " << curr->next << endl;
         cout << endl;
      }
   }

   void insert(int newValue)
   {
      Node *newNode = new Node;

      newNode->data = newValue;

      if (head == NULL)
      {
         head = newNode;
         end = newNode;
         cout << endl;
         cout << "Element inserted successfully -> " << head->next << endl;
         cout << endl;
      }
      else
      {
         newNode->next = head;
         head->prev = newNode;
         head = newNode;
         cout << endl;
         cout << "Element inserted successfully -> " << head << endl;
         cout << endl;
      }
   }

   void print(bool status = false)
   {
      cout << endl;
      if (head == NULL)
      {
         cout << "List Is Empty !\n\n";
         return;
      }
     
      Node *curr = head;
      Node *currEnd = end;
      switch (status)
      {
      case true:
         while (currEnd != NULL)
         {
            cout << "Element in -> : " << currEnd << " Contain : " << currEnd->data << endl;
            currEnd = currEnd->prev;
         }
         break;

       case false:
         while (curr != NULL)
         {
            cout << "Element in -> : " << curr << " Contain : " << curr->data << endl;
            curr = curr->next;
         }
         break;
      }
      cout << endl;
   }
   
   Node *search(int data){
      if(head == NULL){
         cout << "Your List is Empty ! " << endl;
         return nullptr;
      }
      while (head != NULL)
      {
         if(head -> data == data){
            cout << "Your Data Located in -> " << head << endl;
            return head;
         }
         head = head -> next;
      }
      
   }
   
   void delet(Node *target){
      if(head == NULL){
         cout << "Your List is Empty ! " << endl;
         return;
      }

      if(head == target){
         head = target -> next;
         cout << endl;
         cout << "Element Deleted Successfully"<< endl;
      }

      Node *curr = head;

      while (curr != NULL)
      {
         if(curr -> next == target){
            curr  = target -> next;
            curr  = target -> prev;
            cout << endl;
            cout << "Element Deleted Successfully"<< endl;
         }
         curr = curr -> next;
      }
      
   }
   
};

int main()
{

   
   //----------> Instance Object from LinkedList Class
   LinkedList LnkObj;

   //--------> Append Data in the end
   LnkObj.append(2);
   LnkObj.append(3);
   LnkObj.append(54);
   LnkObj.append(75);
   //--------> Append Data in the Front
   LnkObj.insert(78);
   LnkObj.insert(234);
   LnkObj.insert(76);
   LnkObj.insert(53);
   //--------> Print List  with Next
   LnkObj.print();
   //----------> Delete All Element from x to your targrt if you work with Next
   //----------> Delete specific Element work with prev
   LnkObj.delet(LnkObj.search(76));
   //--------> Print reverse List with Prev 
   LnkObj.print(true);

   //--------> Search by value
   LnkObj.search(234);
}
//=========== Black Wolf =====================>
