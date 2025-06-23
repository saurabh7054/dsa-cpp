#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end) {
   if (start >= end) return;  // base case

   swap(str[start], str[end]);
   reverseString(str, start + 1, end - 1);  // recursive call
}

int main() {
   string str = "hello";
   reverseString(str, 0, str.length() - 1);
   cout << "Reversed string: " << str << endl;
   return 0;
}
