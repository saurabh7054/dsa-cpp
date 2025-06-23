#include <iostream>
using namespace std;

// Recursive function to calculate factorial
int factorial(int n) {
   if (n == 0 || n == 1) {
      return 1; // Base case
   }
   return n * factorial(n - 1); // Recursive call
}

int main() {
   int number;
   cout << "Enter a number: ";
   cin >> number;
    
   cout << "Factorial of " << number << " is " << factorial(number) << endl;
    
   return 0;
}
