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
        cout << "Array is Empty\n";
        return (lenght == 0);
    };

    bool isFull()
    {
        cout << "Array is Full\n";
        return (lenght == size);
    }

    int Check_Status(int opt)
    {
        switch (opt)
        {
        case 1:
            if (isEmpty())
            {
                return 0;
            }
            break;

        case 2:
            if (isFull())
            {
                return 0;
            }
            break;
        }
    }

    void displayArr()
    {
        Check_Status(1);
        for (int i = 0; i < lenght; i++)
        {
            cout << "Index : "  << i << "contain value : " << arr[i] << endl;
        }
    }

    void append(t value)
    {
        Check_Status(2);
        arr[lenght] = value;
        lenght++;
    }

    void inserter(int index, t value)
    {
        Check_Status(2);

        if (index > lenght)
        {
            cout << "Invalid Index\n";
            return;
        }

        for (int i = lenght; i > index; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[index] = value;
        lenght++;
    }

    int deleter(int index)
    {

        Check_Status(2);
        Check_Status(1);

        if (index >= lenght || index < 0)
        {
            cout << "Invalid Index\n";
            return 0;
        }

        int ele = arr[index];
        for (int i = index; i < lenght - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        lenght--;
        return ele;
    }

    int Sequential(t value)
    {
        Check_Status(1);

        for (int i = 0; i < lenght; i++)
        {
            if (arr[i] == value)
            {
                return i;
            }
        }

        return -1;
    }

    void pop()
    {
        Check_Status(1);

        arr[lenght] = 0;
        lenght--;
    }

    int Max_Value()
    {

        Check_Status(1);

        int max = arr[0];

        for (int i = 1; i < lenght; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
            }
        }

        return max;
    }

    int Min_Value()
    {
        Check_Status(1);

        int min = arr[0];

        for (int i = 1; i < lenght; i++)
        {
            cout << arr[i] << endl;
            if (min > arr[i])
            {
                min = arr[i];
            }
        }
    }
};

int main()
{
    Array<int> arr(5);

    cout << arr.isEmpty() << endl; // Check if array is empty or not Big-O(1)
    cout << arr.isFull() << endl;  // Check if array is Full or not Big-O(1)

    arr.append(20); // append new value Big-O(1)
    arr.append(40); // append new value Big-O(1)
    arr.append(50);                     // append new value Big-O(1)
    arr.inserter(3, 70);                // insert new value and shift Big-O(n)
    arr.deleter(3);                     // Delete by index and shift Big-O(n)
    arr.pop();                          // Delete last Element in array Big-O(1)
    arr.displayArr();                   // Print Array Values Big-O(n)
    cout << arr.Min_Value() << endl;    // print min value at the array Big-O(n)
    cout << arr.Max_Value() << endl;    // print max value at the array Big-O(n)
    cout << arr.Sequential(40) << endl; // Search -> Sequential Big-O(n)
}