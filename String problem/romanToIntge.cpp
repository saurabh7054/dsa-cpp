#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int romanToInt(string s) {
    unordered_map<char, int> roman{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
                                   {'C', 100}, {'D', 500}, {'M', 1000}};

    int result = 0;
    for (size_t i = 0; i < s.size(); ++i){
        // If the current value is less than the next value, subtract it.
        if (i < s.size() - 1 && roman[s[i]] < roman[s[i + 1]]) {
            result -= roman[s[i]];
        } else {
            result += roman[s[i]];
        }
    }

    return result;
}

int main() {
    string s = "LVIII";
    cout << "The integer value of " << s << " is: " << romanToInt(s) << endl;
    return 0;
}
