#include<iostream>
using namespace std;
#define Size 100

class queue{
private:
   int arr[Size];
   int front, rear;
public:
   queue(){
     front = -1;
     rear = -1;
   }
   void enqueue(int val){
     if(rear == Size-1){
       cout <<"queue is full cannot push!" << val << endl;
       return;
     }
     if(front == -1) front = 0;
     rear++;
     arr[rear] = val;
     cout << "enqueue: "<< val << endl;
   }
   void dequeue(){
     if(front == -1 || front > rear){
       cout <<"queue is empty!" << endl;
       return;
     }
     cout <<"Dequeue: " << arr[front++] << endl;
     if(front > rear) front = rear = -1;
   }
   void display(){
      if(front == -1 || front > rear){
       cout <<"queue is empty!" << endl;
       return;
     }
     cout <<"Queue: ";
     for(int i=front; i<=rear; i++){
       cout << arr[i] << " ";
     }
     cout << endl;
   }
};

int main (){
  queue q1;
  q1.enqueue(1);
  q1.enqueue(2);
  q1.enqueue(3);
  q1.enqueue(4);
  q1.enqueue(5);
  q1.display();
  
  q1.dequeue();
  q1.dequeue();
  q1.display();
  return 0;
}









