#include <iostream>
#include <string>

std::string removeOuterParentheses(const std::string& s) {
    std::string result;
    int depth = 0;

    for (char ch : s) {
        if (ch == '(') {
            if (depth > 0) {
                result += ch; // Add to result if it's not an outermost opening parenthesis
            }
            depth++; // Increase depth
        } else if (ch == ')') {
            depth--; // Decrease depth
            if (depth > 0) {
                result += ch; // Add to result if it's not an outermost closing parenthesis
            }
        }
    }

    return result;
}

int main() {
    std::string s = "(()())(())";
    std::string output = removeOuterParentheses(s);
    std::cout << "Output: " << output << std::endl; // Expected output: "()()()"
    return 0;
}
