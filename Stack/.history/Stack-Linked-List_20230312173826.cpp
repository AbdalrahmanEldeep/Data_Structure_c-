#include "iostream"
using namespace std;


// Create Our Interface Class
template <class T>
class Node
{

   struct Nd
   {
      T data;
      Nd *next;
      Nd *prev;
      Nd()
      {
         next = nullptr;
         prev = nullptr;
      }
   };
   Nd *head;
   Nd *tail;

public:
   bool isEmpty();
   void print();
   void push(T data);
   void pop();
   void peek();
   Node();
};

// Create Our Constructor Class
template<class T>
 Node<T>::Node()
{
   head = new Nd;
   tail = head;
};

//Check is Empty
template<class T>
bool Node<T>::isEmpty()
{
   if (!head->next)
   {
      cout << "Stack is Empty !\n";
      return true;
   }
   cout << "Stack is not Empty !\n";
}

//Display Stack elements
template<class T>
void Node<T>::print()
{
   Nd *curr = this->head;

   if (!head->next)
      isEmpty();

   while (curr->next)
   {
      cout << curr->next->data << endl;
      curr = curr->next;
   }
}

//append new Stack elements
template <class T>
void Node<T>::push(T data)
{
   Nd *newNode = new Nd;
   newNode->data = data;

   if (!head->next)
   {
      head->next = newNode;
      newNode->prev = head;
      tail = newNode;
      cout << "Your last appending  -> " << tail->data << endl;
      return;
   }
   newNode->prev = tail;
   tail->next = newNode;
   tail = newNode;
   cout << "Your last appending -> " << tail->data << endl;
}

//delete new Stack elements
template<class T>
void Node<T>::pop()
{
   if (tail != head)
   {
      tail = tail->prev;
      T popper = tail->next->data;
      tail->next = nullptr;
      cout << "You deleted  -> " << popper << endl;
      return;
   }
   isEmpty();
}

//Get 
template<class T>
void Node<T>::peek()
{
   isEmpty();
   cout <<  tail->data;
}


int main()
{

   Node<int> node;

   node.push(33);
   node.push(54);
   node.pop();
   node.pop();
   node.print();
   node.isEmpty();
   node.peek();
}