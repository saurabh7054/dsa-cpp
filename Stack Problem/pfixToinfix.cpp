#include <iostream>
#include<stack>
using namespace std;


string prefixToInfix(string prefix) {
    stack<string> st;
    int n = prefix.size();
    
    for (int i = n - 1; i >= 0; i--) {
        char c = prefix[i];
        if(c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^') {
            string op1 = st.top(); st.pop();
            string op2 = st.top(); st.pop();
            string exp = "(" + op1 + c + op2 + ")";
            st.push(exp);
        } else {
            st.push(string(1, c));
        }
    }
    return st.top();
}

int main() {
    string prefix = "*-A/BC-/AKL";
    cout << "Prefix Expression : " << prefix << endl;
    cout << "Infix Expression: " << prefixToInfix(prefix) << endl;
    return 0;
}
