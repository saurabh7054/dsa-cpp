#include<iostream>
using namespace std;

class stack{
private:
  int *arr;
  int top;
  int capacity;
  
public:
  stack(int size){
    capacity = size;
    arr = new int[capacity];
    top = -1;
  }
  stack(){
    delete[] arr;
  }
  
  void push(int x){
    if(top >= capacity - 1){
      cout <<"stack overflow! cannot Pushed "<< x << endl;
      return;
    }
    arr[++top] =  x;
    cout<< x <<" Pushed to stack" << endl;
  }
  
  void printStack(){
    if(top == -1){
      cout <<"Stack is empty!" << endl;
    }
    cout <<"stack Element :";
    for(int i=0; i<=top; i++){
      cout << arr[i] <<" ";
    }
    cout << endl;
  }
};

int main (){
  stack s1(5);
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s1.push(5);
  s1.push(6);
  
  s1.printStack();
  return 0;
}