#include <bits/stdc++.h>
using namespace std;

class CircularQueue{
    int *arr;
    int front;
    int rear;
    int size;
    
    public:
    // Initialize your data structure.
    CircularQueue(int n){
        size = n;
        arr = new int[size];
        front = rear = -1;
    }

    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    void enqueue(int data) {
        if(front == 0 && rear == size - 1) {
            cout << "Queue is full" << endl;
        }
        else if(front == -1) {
            front = rear = 0;
            arr[rear] = data;
        }
        else if(raer == size - 1 && front != 0) {
            rear = 0;
            arr[rear] = data;
        }
        else {
            rear++;
            arr[rear] = data;
        }
    }

    void dequeue() {
        if(front == -1) {
            cout << "Queue is empty" << endl;
        }
        else if(front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if(front == size - 1) {
            front = 0;
        }
        else {
            front++;
        }
    }

};


int main() {

    CircularQueue q(5);
    

    return 0;
}