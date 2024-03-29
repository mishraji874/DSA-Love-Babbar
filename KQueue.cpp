#include <bits/stdc++.h>
using namespace std;

class KQueue {
    public:
        int n, k, freeSpot;
        int *arr, *front, *rear, *next;

        KQueue(int _n, int _k) : n(_n), k(_k), freeSpot(0) {
            arr = new int[n];
            next = new int[n];
            front = new int[k];
            rear = new int[k];

            for(int i = 0; i < k; ++i) {
                front[i] = rear[i] = -1;
            }

            for(int i = 0; i < n; ++i) {
                next[i] = i + 1;
            }
            next[n-1] = -1;
        }

        //push x into the qith queue
        bool push(int x, int qi) {
            //overflow
            if(freeSpot == -1) {
                return false;
            }
            //find first free index
            int index = freeSpot;

            //update freespot
            freeSpot = next[index];

            //if first element in qi
            if(front[qi] == -1) {
                front[qi] = index;
            }
            else {
                //link new element to the Q's nearest element
                next[rear[qi]] = index;
            }

            //update next
            next[index] = -1;

            //update rear
            rear[qi] = index;
            arr[index] = x;
            return true;
        }

        int pop(int qi) {
            //underflow
            if(front[qi] == -1) {
                return -1;
            }

            //find index to pop
            int index = front[qi];

            //front update
            front[qi] = next[index];

            //update freespots
            next[index] = freeSpot;
            freeSpot = index;

            return arr[index];
        }
};

int main() {



    return 0;
}