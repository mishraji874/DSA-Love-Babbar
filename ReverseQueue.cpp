#include <bits/stdc++.h>
#include <queue>
using namespace std;

void reverse(queue<int> &q) {
    stack<int> s;

    //put all the elements into the stack
    while(!q.empty()) {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    //put all the elements from stack to queue
    while(!s.empty()) {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void reverseRecursion(queue<int> &q) {
    //base case
    if(q.empty()){
        return;
    }

    int temp = q.front();
    q.pop();

    reverseRecursion(q);

    q.push(temp);
}

void reverseK(queue<int> &q, int k) {
    stack<int> s;
    int count = 0;
    int n = q.size();

    if(k == 0 || k > n) {
        return;
    }

    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count == k)
            break;
    }

    while(!s.empty()) {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    //push n-k elements from q front to back
    count = 0;
    while(!q.empty()) {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;

        if(count == n - k)
            break;
    }
}

int main() {

    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(2);
    q.push(8);

    //reverse(q);
    //reverseRecursion(q);
    reverseK(q, 3);

    cout << "Printing queue" << endl;
    while(!q.empty()) {
        cout << q.front() << " ";
        q.pop();    
    }
    cout << endl;

    return 0;
}