#include<bits/stdc++.h>
using namespace std;

class Node {

    public:
    int data;
    // pointer for next node
    Node* next;

    // constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node () {
        int value = this -> data;
        // memory free
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }
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

void insertAtTail (Node* &head, Node* &tail, int d) {

    Node* temp = new Node(d);
    tail -> next = temp;
    tail = tail -> next;

}

// insert at given position

void insertAtPosition (Node* &head, Node* &tail, int pos, int d) {

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
        insertAtTail(head, tail, d);
        return;
    }

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;

}

// delete the node at given position

void deleteNode (Node* &head, Node* &tail, int pos) {


    // deleting first or starting node
    if(pos == 1) {

        // if only one node present 
        if(head -> next == NULL) {
            Node* temp = head;
            head = NULL;
            tail = NULL;
            return;
        }
        
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;

        return;
    }


    Node* current = head;
    int curr_pos = 1;

    // traversing to the given position
    while (curr_pos < pos - 1) {
        current = current -> next;
        curr_pos ++;
    }

    Node* temp = current -> next;

    // Deleting last node
    if(temp -> next == NULL) {
        current -> next = NULL;
        tail = current;
        temp -> next = NULL;
        delete temp;
        return;
    }

    // deleting middle node
    current -> next = temp -> next;
    temp -> next = NULL;
    delete temp;

}


// reversing linked list 

Node *solve(Node* &head, Node* &curr, Node* &prev, Node* &forward) {
    if(curr == NULL) {
        head = prev;
        return prev;
    }

    forward = curr -> next;
    curr -> next = prev;
    prev = curr;
    curr = forward;
    solve(head, curr, prev, forward);
}


// reversing linked list (Iterative approach)

Node *reverseLinkedList(Node* &head) 
{

    // if(head == NULL || head -> next == NULL) {
    //     return head;
    // }

    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    // while(curr != NULL) {
    //     forward = curr -> next;
    //     curr -> next = prev;
    //     prev = curr;
    //     curr = forward;
    // }

    // head = prev;

    return solve(head, curr, prev, forward);
}