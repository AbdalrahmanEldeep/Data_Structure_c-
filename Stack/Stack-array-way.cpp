template <class T>
class Stack
{

private:
   int len;
   int size;
   T *stack;

public:
   Stack(int size)
   {
      this->size = size;
      stack = new int(size);
      len = 0;
   }

   bool isEmpty()
   {
      if (len == 0)
      {
         cout << "Stack is Empty !" << endl;
         return true;
      }
      return false;
   }

   bool isFull()
   {
      if (len == size)
      {
         cout << "Stack is Full !" << endl;
         return true;
      }
      return false;
   }

   void getStack()
   {
      int i = 0;
      if (isEmpty())
      {
         return;
      }
      while (i < len)
      {
         cout << "Element in index : " << i << " -> " << stack[i] << endl;
         i++;
      }
   }

   void push(T data)
   {
      if (isFull())
      {
         return;
      }
      stack[len] = data;
      len++;
   }

   void pop()
   {
      if (isEmpty())
      {
         return;
      }
      len--;
   }

   void top()
   {
      if (isEmpty())
      {
         return;
      }
      cout << "Top Element is : " << stack[len - 1] << endl;
   }
};
