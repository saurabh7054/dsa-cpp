#include <iostream>
#include <stack>
#include <cctype> // For isalnum()
using namespace std;

string postfixToInfix(string post){
  stack<string> st;
  int n = post.size();
  
  for(int i=0; i<n; i++){
    char c = post[i];
    if(isalnum(c)){
      string op(1, c);
      st.push(op);
    }else{
      string op2 = st.top(); st.pop();
      string op1 = st.top(); st.pop();
      string exp = "(" + op1 + c + op2 + ")";
      st.push(exp);
    }
  }
  return (st.size() == 1) ? st.top() : "Invalid Postfix Expression";
}

int main() {
  string post = "ab*c+";
  cout << "Postfix Expression: " << post << endl;
  cout << "Infix Expression: " << postfixToInfix(post) << endl;
  return 0;
}
