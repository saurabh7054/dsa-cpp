#include <iostream>
#include <string>
using namespace std;

string longestCommonPrefix(string strs[], int n) {
    if (n == 0) return "";

    // Start with the first string as the initial prefix
    string prefix = strs[0];
    
    // Iterate over the remaining strings
    for (int i = 1; i < n; ++i) {
        // Reduce prefix length until it matches the start of strs[i]
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.size() - 1);  // Remove the last character
            if (prefix.empty()) return "";  // Return empty if no common prefix
        }
    }
    return prefix;
}

int main() {
    // Initialize an array of strings instead of vector
    string strs[] = {"flower", "flow", "flowht"};
    int n = sizeof(strs) / sizeof(strs[0]);  // Calculate the number of elements in the array

    cout << "Longest Common Prefix: " << longestCommonPrefix(strs, n) << endl;
    return 0;
}
