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

Node* reverse(Node* &head) {
    Node* prev = NULL;
    Node* curr = head;
    Node* next = curr -> next;

    while(curr != NULL) {
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

bool checkPalindrome(Node* &head) {
    if(head == NULL || head -> next == NULL) {
        return true;
    }

    //Step1: find the middle node
    Node* slow = head;
    Node* fast = head -> next;
    while(fast != NULL) {
        fast = fast -> next;
        if(fast != NULL) {
            fast = fast -> next;
            slow = slow -> next;
        }
    }

    //slow pointer is pointing to the middle element

    //Step2: reverse LL after middle node
    Node* reverseLL = reverse(slow -> next);

    slow -> next = reverseLL;

    //Step3: start comparison
    Node* temp1 = head;
    Node* temp2 = reverseLL;
    while(temp2 != NULL) {
        if(temp1 -> data != temp2 -> data) {
            return false;
        }
        else {
            //aage badh jao
            temp1 = temp1 -> next;
            temp2 = temp2 -> next;
        }
    }

    return true;
}

int main() {

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = NULL;

    bool isPalindrome = checkPalindrome(head);

    if(isPalindrome) {
        cout << "LL is palindrome" << endl;
    } else {
        cout << "LL is not palindrome" << endl;
    }

    return 0;
}