#include<iostream>
#include<stack>
#include<cctype>
using namespace std;

string PostfixToprefix(string Postfix) {
  stack<string> st;
  int n = Postfix.size();
  
  for(int i=0; i<n; i++){
    char ch = Postfix[i];
    if(isalnum(ch)){
      string op(1, ch);
      st.push(op);
    }
    else{
      string op2 = st.top(); st.pop();
      string op1 = st.top(); st.pop();
      string exp =  ch + op1 + op2;
      st.push(exp);
    }
  }
  return st.top();
}

int main (){
  string Postfix = "ABC/-AK/L-*";
  cout <<"Postfix Expression: " << Postfix << endl;
  
  cout << "Prefix Expression: " << PostfixToprefix(Postfix) << endl;
  return 0;
}