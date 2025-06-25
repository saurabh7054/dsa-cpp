#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to count substrings with at most 'k' distinct characters
int atMostKDistinct(const string& s, int k) {
    unordered_map<char, int> charCount;
    int left = 0, count = 0, n = s.length();

    for (int right = 0; right < n; ++right) {
        charCount[s[right]]++;
        while (charCount.size() > k) {
            charCount[s[left]]--;
            if (charCount[s[left]] == 0) {
                charCount.erase(s[left]);
            }
            left++;
        }
        count += (right - left + 1);
    }
    return count;
}

// Function to count substrings with exactly 'k' distinct characters
int countSubstringsWithKDistinct(const string& s, int k) {
    return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
}

int main() {
    string s = "abaaca";
    int k = 1;
    cout << countSubstringsWithKDistinct(s, k) << endl;
    return 0;
}
