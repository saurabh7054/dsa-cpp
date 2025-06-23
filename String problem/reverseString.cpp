#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

string reverseString(string& s) {
    int n = s.length();
    reverse(s.begin(), s.end());

    string ans = "";
    for (int i = 0; i < n; i++) {
        string word = "";
        // Skip spaces in the beginning of the word
        while (i < n && s[i] == ' ') i++;

        // Collect the word
        while (i < n && s[i] != ' ') {
            word += s[i];
            i++;
        }

        // Reverse the word
        reverse(word.begin(), word.end());
        
        // Append the word to result if it's not empty
        if (word.length() > 0) {
            if (ans.length() > 0) ans += " "; // Add space between words
            ans += word;
        }
    }
    return ans;
}

int main() {
    string s = "      i am a  boy";
    string output = reverseString(s);

    cout << "After reversing, the string is: " << output << endl;
    return 0;
}
