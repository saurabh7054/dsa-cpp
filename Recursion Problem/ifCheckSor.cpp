
#include <iostream>
using namespace std;

bool isSorted(int arr[], int n) {
   // Base case: 0 or 1 element
   if(n == 0 || n == 1){
      return true;
   }
   // If first element is greater than second, not sorted
   if(arr[0] > arr[1]){
      return false;
   }
   // Recursive check on remaining array
   return isSorted(arr + 1, n - 1);
}

int main() {
   int arr[] = {1, 2, 3, 4, 5};  // Try {1, 3, 2} for not sorted
   int n = sizeof(arr)/sizeof(arr[0]);

   if(isSorted(arr, n))
      cout << "True, the array is sorted.";
   else
      cout << "Flase, the array is not sorted.";

   return 0;
}
