#include<iostream>
using namespace std;

class Stack{
private:
  int *arr;
  int top;
  int capacity;
  
public:
  Stack(int size){
    capacity = size;
    arr = new int[capacity];
    top = -1;
  }
  ~Stack(){
    delete[] arr;
  }
  
  void push(int x){
    if(top >= capacity - 1){
      cout <<"Stack overflow! Cannot push " << x << endl;
      return;
    }
    arr[++top] =  x;
    cout<< x <<" pushed to stack" << endl;
  }
  
  void pop(){
    if(top == -1){
      cout << "Stack underflow! Cannot pop from an empty stack." << endl;
      return;
    }
    cout << arr[top--] << " popped from stack." << endl;
  }
  
  void printStack(){
    if(top == -1){
      cout <<"Stack is empty!" << endl;
      return;
    }
    cout <<"Stack elements: ";
    for(int i=0; i<=top; i++){
      cout << arr[i] <<" ";
    }
    cout << endl;
  }
};

int main (){
  Stack s1(5);
  s1.push(1);
  s1.push(2);
  s1.push(3);
  s1.push(4);
  s1.push(5);
  s1.push(6);
  
  s1.printStack();

  s1.pop();
  s1.printStack();

  

  return 0;
}
