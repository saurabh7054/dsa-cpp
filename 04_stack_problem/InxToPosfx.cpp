#include <iostream>
#include <stack>
using namespace std;

// Convert infix expression to postfix expression without extra function
string convertInfixToPostfix(string expression) {
  string postfix = ""; // Store the result
  stack<char> operators; // Stack to store operators

  for (char c : expression) {
    // If the character is an operand (a-z, A-Z, 0-9), add it to the result
    if (isalnum(c)) {
      postfix += c;
    }
    // If the character is '(', push it to the stack
    else if (c == '(') {
      operators.push(c);
    }
    // If the character is ')', pop from the stack until '(' is found
    else if (c == ')') {
      while (!operators.empty() && operators.top() != '(') {
        postfix += operators.top();
        operators.pop();
      }
      operators.pop(); // Remove the '(' from the stack
    }
    // If the character is an operator
    else {
      // Determine precedence directly using conditions
      int precedenceC = (c == '^') ? 3 : (c == '*' || c == '/') ? 2 : (c == '+' || c == '-') ? 1 : 0;

      while (!operators.empty()) {
        char topOp = operators.top();
        int precedenceTop = (topOp == '^') ? 3 : (topOp == '*' || topOp == '/') ? 2 : (topOp == '+' || topOp == '-') ? 1 : 0;

        if (precedenceTop >= precedenceC) {
          postfix += operators.top();
          operators.pop();
        } else {
          break;
        }
      }
      operators.push(c); // Push current operator to the stack
    }
  }

  // Pop all remaining operators from the stack
  while (!operators.empty()) {
    postfix += operators.top();
    operators.pop();
  }

  return postfix;
}

int main() {
  string infix = "(A+B)*(C^D-E)";
  cout << "Infix: " << infix << endl;
  cout << "Postfix: " << convertInfixToPostfix(infix) << endl;
  return 0;
}
