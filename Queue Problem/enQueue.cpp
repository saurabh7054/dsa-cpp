#include <iostream>
using namespace std;
#define SIZE 100

class Queue {
private:
   int arr[SIZE];
   int front, back;
public:
   Queue() {
      front = -1;
      back = -1;
   }
   void enqueue(int value) {
      if (back == SIZE - 1) {
         cout << "Queue is full! Cannot enqueue " << value << endl;
         return;
      }
      if (front == -1) front = 0;
      back++;
      arr[back] = value;
      cout << "Enqueue: " << value << endl;
   }
   void display() {
      if (front == -1 || front > back) {
         cout << "Queue is empty!" << endl;
         return;
      }
      cout << "Queue: ";
      for (int i = front; i <= back; i++) {
         cout << arr[i] << " ";
      }
      cout << endl;
   }
};
int main() {
   Queue q1;
   q1.enqueue(10);
   q1.enqueue(20);
   q1.enqueue(30);
   q1.enqueue(40);
   q1.enqueue(50);

   q1.display();
   return 0;
}
