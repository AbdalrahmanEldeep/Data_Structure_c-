#include "iostream"
using namespace std;



template <class t>
class Array{

   private : 
      t *arr;
      int size;
      int lenght;

   public: 
      Array(int size){
            this -> size = size;
            arr = new t[size];
            lenght = 0;
      }

    bool isEmpty(){
        return (length == 0)
    }

    bool isFull(){
        return (length == size)
    }

    t displayArr(){
        for(i in arr){
            
        }
    }

};

int main(){
    
}