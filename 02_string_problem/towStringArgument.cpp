#include <iostream>
#include <string>
using namespace std;

bool areAnagrams(string str1, string str2) {
    // If lengths of the strings are not the same, they can't be anagrams
    if (str1.size() != str2.size()) {
        return false;
    }

    // Frequency array to count occurrences of characters
    int freq[26] = {0};

    // Traverse both strings and update the frequency array
    for (int i = 0; i < str1.size(); ++i) {
        freq[str1[i] - 'A']++;  // Increment for str1
        freq[str2[i] - 'A']--;  // Decrement for str2
    }

    // Check if all counts in the frequency array are zero
    for (int i = 0; i < 26; ++i) {
        if (freq[i] != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    string str1 = "CAT";
    string str2 = "ACT";

    if (areAnagrams(str1, str2)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
