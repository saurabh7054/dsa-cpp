#include <iostream>
#include <string>
#include <climits> // for INT_MAX and INT_MIN

int myAtoi(const std::string& s) {
    int n = s.length();
    int i = 0;
    int sign = 1;
    long result = 0;

    // 1. Ignore leading whitespace
    while (i < n && s[i] == ' ') {
        i++;
    }

    // 2. Check for sign
    if (i < n && (s[i] == '-' || s[i] == '+')) {
        sign = (s[i] == '-') ? -1 : 1;
        i++;
    }

    // 3. Convert digits to integer
    while (i < n && isdigit(s[i])) {
        result = result * 10 + (s[i] - '0');

        // 4. Handle overflow
        if (result * sign > INT_MAX) {
            return INT_MAX;
        }
        if (result * sign < INT_MIN) {
            return INT_MIN;
        }

        i++;
    }

    return static_cast<int>(result * sign);
}

int main() {
    std::string s = " -0+42";
    int integerValue = myAtoi(s);

    std::cout << "Output: " << integerValue << std::endl;

    return 0;
}
