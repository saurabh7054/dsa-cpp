
#include <iostream>
#include <string>
using namespace std;

string largestOddNumber(string str) {
    int n = str.size();
    
    // Start from the end and find the first odd digit
    for (int i = n - 1; i >= 0; i--) {
        // Check if the current character is an odd digit
        if ((str[i] - '0') % 2 != 0) {
            // Return the substring from the beginning to this odd digit
            return str.substr(0, i + 1);
        }
    }
    
    // If no odd digit is found, return an empty string
    return "";
}

int main() {
    string str;
    cout << "Enter the number string: ";
    cin >> str;
    
    string result = largestOddNumber(str);
    if (result.empty()) {
        cout << "No odd number can be formed." << endl;
    } else {
        cout << "The largest odd number is: " << result << endl;
    }
    return 0;
}
