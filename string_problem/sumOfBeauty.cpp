#include <iostream>
#include <string>
#include <vector>
#include<climits>
#include <algorithm>
using namespace std;

int beautySum(string s) {
    int n = s.length();
    int totalBeauty = 0;

    for (int i = 0; i < n; ++i) {
        vector<int> freq(26, 0);
        int maxFreq = 0;

        for (int j = i; j < n; ++j) {
            // Increment the frequency of the current character
            freq[s[j] - 'a']++;

            // Update maxFreq
            maxFreq = max(maxFreq, freq[s[j] - 'a']);

            // Find the minimum frequency greater than zero
            int minFreq = INT_MAX;
            for (int k = 0; k < 26; ++k) {
                if (freq[k] > 0) {
                    minFreq = min(minFreq, freq[k]);
                }
            }

            // Update the total beauty sum
            totalBeauty += (maxFreq - minFreq);
        }
    }

    return totalBeauty;
}

int main() {
    string s = "aabcbaa";
    cout << "Input: " << s << endl;
    cout << "Output: " << beautySum(s) << endl;
    return 0;
}
