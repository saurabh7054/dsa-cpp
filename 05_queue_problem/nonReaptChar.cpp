#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

string FirstNonRepeating(string stream) {
    queue<char> q;
    unordered_map<char, int> freq;
    string result = "";

    for (char ch : stream) {
        freq[ch]++;
        q.push(ch);

        // Remove repeating characters from front
        while (!q.empty() && freq[q.front()] > 1) {
            q.pop();
        }

        if (q.empty()) result += '#';
        else result += q.front();
    }

    return result;
}

int main() {
    string input = "aabc";
    cout << "Output: " << FirstNonRepeating(input) << endl;
    return 0;
}

