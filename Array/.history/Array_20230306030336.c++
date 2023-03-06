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
        return (length == 0)
    }

    bool isFull()
    {
        return (length == size)
    }

    void displayArr()
    {
        if (isEmpty)
        {
            cout << "Array is Empty  "<< endl;
            return;
        }
        for (int i : lenght)
        {
            cout << arr[i];
        }
    }
    
    void append(t value){
        if(isFull){
            cout << "Array is Full " << endl;
            return;
        }
        arr[lenght] = value;
        lenght++;
    }
    
};

int main()
{
    Array 
}