#include <iostream>
#include <string>

using namespace std;

bool isRotatedString(string s, string goal) {
    // Check if lengths are different
    if (s.length() != goal.length()) {
        return false;
    }

    // Concatenate s with itself
    string s2 = s + s;

    // Check if goal is a substring of s2
    return s2.find(goal) != string::npos;
}

int main() {
    // Example 1
    string s1 = "abcde", goal1 = "abced";
    cout << (isRotatedString(s1, goal1) ? "true" : "false") << endl;

   
    return 0;
}





