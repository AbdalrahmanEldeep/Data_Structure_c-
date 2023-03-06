#include "iostream"
using namespace std;

template <class t>
class Array
{

private:
    t *arr;
    int size;
    int lenght;

public:
    Array(int size)
    {
        this->size = size;
        arr = new t[size];
        lenght = 0;
    }

    bool isEmpty()
    {
        return (lenght == 0);
    }

    bool isFull()
    {
        return (lenght == size);
    }

    void displayArr()
    {
        if (isEmpty())
        {
            cout << "Array is Empty  "<< endl;
            return;
        }
        for (int i = 0 ; i < lenght;i++)
        {
            cout << arr[i] << endl;
        }
    }
    
    void append(t value){
        if(isFull()){
            cout << "Array is Full " << endl;
            return;
        }
        arr[lenght] = value;
        lenght++;
    }
    
};

int main()
{
    Array<int> arr(5);

    cout << arr.isEmpty() << endl; // Check if array is empty or not
    cout << arr.isFull() << endl; // Check if array is F or not
 
    arr.append(20); // append new value 
    arr.append(40); // append new value
    arr.append(50); // append new value
    arr.displayArr(); // Print Array Values
}