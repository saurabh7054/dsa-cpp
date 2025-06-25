#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

string prefixToPostfix(string prefix){
  stack<string> st;
  int n = prefix.size();
  
  for(int i=n-1; i >= 0; i--){
    char ch = prefix[i];
    if(isalnum(ch)){
      string op(1, ch);
      st.push(op);
    }
    else{
      string op1 = st.top(); st.pop();
      string op2 = st.top(); st.pop();
      string exp = op1 + op2 + ch;
      st.push(exp);
    }
  }
  return st.top();
}

int main (){
  string prefix = "*-A/BC-/AKL";
  cout <<"Prefix Expression: " << prefix << endl;
  
  cout << "Postfix Expression: " << prefixToPostfix(prefix) << endl;
  return 0;
}