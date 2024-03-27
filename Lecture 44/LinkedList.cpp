#include<bits/stdc++.h>
using namespace std;


class Node {

    public:

    int data;
    // pointer for next node
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// printing linked list

void print(Node* &head) {

    // creating the copy of original linked list and storing it in temp
    Node* temp = head;

    // traversing to the linked list
    while(temp != NULL) {
        cout << temp -> data << " -> ";
        temp = temp -> next;
    }
    
    cout << endl;
}

// inserting new node at the start of linked list

void insertAtHead (Node* &head, int d) {

    // creating new temporary node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// inserting node at the end of the linked list

void insertAtTail (Node* &tail, int d) {

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;

}

// insert at given position

void insertAtPosition (Node* &head,Node* tail, int pos, int d) {

    // inserting at the head
    if(pos == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
    Node* nodeToInsert = new Node(d);
    int count = 1;

    // traversing the linked list
    while(count < pos - 1)
    {
        temp = temp -> next;
        count ++;
    }

    // inserting at the tail
    if(temp -> next == NULL) {
        insertAtTail(tail, d);
        return;
    }

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

int main () {

    Node* node1 = new Node(10);

    cout << node1->data << endl;
    cout << node1->next << endl;

    Node* head = node1;
    Node* tail = node1;

    insertAtHead(head, 9);
    print(head);
    insertAtTail(tail, 11);
    insertAtTail(tail, 12);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 16);

    print(head);
    
    insertAtPosition(head, tail, 8, 13);

    print(head);

}