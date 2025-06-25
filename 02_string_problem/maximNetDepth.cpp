#include<iostream>
#include<string>
using namespace std;

int countNested(string str){
    int current_nested = 0;
    int max_nested = 0;

    for(char c : str){
        if(c == '('){
            current_nested++;
            max_nested = max(max_nested, current_nested);
        }else if(c == ')'){
            current_nested--;
        }
    }
    return max_nested;
}

int main (){
    string str = "((((()))))";
    cout << "Maximum Nested parenthesis : " << countNested(str) << endl;
    return 0;
}


