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

    bool isEmpty() {
        return (lenght == 0);
    };

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

    void inserter(int index,t value){
        if(isFull()){
            cout << "Array is Full \n";
            return;
        }

        for(int i = len; i > index;i--){
            arr[i] = arr[i-1];
        }
        arr[index] = value;
        lenght++;
    }

    int deleter(int index){
        if(isFull()){
            cout << "Array is Full\n";
            return 0;
        }else if(index >= lenght || index < 0){
            cout << "Invalid Index\n";
            return 0;
        }

        int ele = arr[index];
        for(int i = index; i < lenght - 1;i++){
            arr[i] = arr[i+1];
        }
        lenght--;
        return ele;
    }

    int Sequential(t value){
        if(isEmpty()){
            cout << "Array is Empty\n";
            return 0;
        }
        for(int i =0; i < lenght;i++){
            if(arr[i] == value){
               return i;
            }
            return -1;
        }
    }

    void pop(){
        if(isEmpty()){
            return;
        }
        arr[lenght] = 0;
        lenght--;
    }   
};


int main()
{
    Array<int> arr(5);


    cout << arr.isEmpty() << endl; // Check if array is empty or not
    cout << arr.isFull() << endl; // Check if array is Full or not
 
    arr.append(20); // append new value 
    arr.append(40); // append new value
    arr.append(50); // append new value
    arr.inserter(4,70); // insert new value and shift
    // arr.deleter(3); // Delete by index and shift 
    // arr.pop(); // Delete last Element in array
    arr.displayArr(); // Print Array Values
    // cout << arr.Sequential(20) << endl; //Search -> Sequential

}