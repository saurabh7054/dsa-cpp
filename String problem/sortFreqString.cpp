#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string frequencySort(string s) {
    // Step 1: Count frequencies of characters
    int freq[256] = {0};  // Frequency array for ASCII characters
    for (char c : s) {
        freq[c]++;
    }

    // Step 2: Create an array to hold the output sorted by frequency
    string result = "";
    for (int count = s.size(); count > 0; count--) {
        for (int i = 0; i < 256; i++) {
            if (freq[i] == count) {
                result += string(count, (char)i);  // Append the character 'count' times
            }
        }
    }

    return result;
}

int main() {
    string s = "Aabb";
    cout << "Output: " << frequencySort(s) << endl;  // Expected output: "eert" or "eetr"
    return 0;
}