#include<iostream>
using namespace std;
int sumofNnM(int n){
   if(n == 1){
      return 1;
   }
   return n + sumofNnM(n - 1);
}

int main (){
   cout << sumofNnM(4) << endl;
   return 0;
}