#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
};

void sortZeroOneTwo(Node* &head) {
    int zero = 0;
    int one = 0;
    int two = 0;

    Node* temp = head;
    while(temp != NULL) {
        if(temp -> data == 0) {
            zero++;
        }
        else if(temp -> data == 1){
            one++;
        }
        else if(temp -> data == 2) {
            two++;
        }
        temp = temp -> next;
    }

    //fill 0, 1 and 2 in the original ll
    temp = head;
    while(temp != NULL) {
        //fill zeros
        while(zero--) {
            temp -> data = 0;
            temp = temp -> next;
        }

        //fill ones
        while(one--) {
            temp -> data = 1;
            temp = temp -> next;
        }

        //fill twos
        while(two--) {
            temp -> data = 2;
            temp = temp -> next;
        }
    }
}

void print(Node* &head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp -> data << endl;
        temp = temp -> next;
    }
}

int main() {
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(0);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;

    print(head);

    sortZeroOneTwo(head);
    print(head);

    return 0;
}