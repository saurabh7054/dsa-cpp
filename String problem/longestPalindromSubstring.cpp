#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size();
    if (n <= 1) return s;

    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int start = 0, maxLength = 0;

    
    for (int length = 1; length <= n; ++length) {
        for (int i = 0; i <= n - length; ++i) {
            int j = i + length - 1;
            if (s[i] == s[j] && (length <= 2 || dp[i + 1][j - 1])) {
                dp[i][j] = true;
                if (length > maxLength) {
                    maxLength = length;
                    start = i;
                }
            }
        }
    }
    return s.substr(start, maxLength);
}
int main() {
    string s = "cbbd";
    cout << "Longest Palindromic Substring: " << longestPalindrome(s) << endl;
    return 0;
}
