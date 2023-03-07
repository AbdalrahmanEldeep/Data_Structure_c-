#include "iostream"
using namespace std;


template<class t1,class t2>
   t1 sum(t1 y , t2 x){
     return (y + x);
   }


int main(){

   cout << sum<int,double>(20,220.3);

}




