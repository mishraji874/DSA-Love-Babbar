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

void removeDuplicates(Node* head) {
    if(head == NULL || head -> next = NULL) {
        return ;
    }

    Node* curr = head;
    while(curr != NULL) {
        if((curr -> next != NULL) && (curr -> data == curr -> next -> data)) {
            Node* temp = curr -> next;
            curr -> next = curr -> next -> next;
            //delete nodes
            temp -> next = NULL;
            delete temp;
        } else {
            curr = curr -> next;
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
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
    Node* sixth = new Node(4);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = sixth;

    print(head);

    removeDuplicates(head);

    print(head);


    return 0;
}