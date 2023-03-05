#include "iostream"
using namespace std;


int main(){

  // Static Array with Stack

  const int y = 5;

  int arr[y]; // depended on Static const size 5 * 4 = 20 bytes in our Stack

  cout << arr << endl; // Print the Adress for the first element in array
  cout << arr[0] << endl; // Print the Value for the first element in array
  cout << *arr << endl; // Print the Value for the first element in array

  // Dynamic Array with Heap and Stack

   int len;

   cout << "Please Enter The Size of Dynamic Array\n";
   cin >> len;
   int *arr_2 = new int[len];  // independed on Static  size and it can Stratch in our free speace
   arr_2[0] = 30; // in this line we assentment the first index in our array with 30 
   cout << arr_2 << endl; // Print the Adress for the first element in array
   cout << arr_2[0] << endl; // Print the Value for the first element in array
   cout << *arr_2 << endl; // Print the Value for the first element in array
  
   delete arr_2; // in this line it will delete the first element only
   delete []arr_2; // in this line it will delete all data in our Heap


}