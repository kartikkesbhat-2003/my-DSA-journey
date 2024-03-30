#include<bits/stdc++.h>
using namespace std;

class Node {
    
    public:
    int data;
    Node* next;
    Node* prev;

    // constructor
    Node (int data) {
        this -> data = data; 
        this -> next = NULL;
        this -> prev = NULL;
    }

    // destructor
    ~Node () {
        int value = this -> data;
        // memory free
        if(this -> next != NULL) {
            delete next;
            this -> next = NULL;
        }

        if(this -> prev != NULL) {
            delete prev;
            this -> prev = NULL;
        }
    }
};

// printing linked list
void print (Node* &head, Node* &tail) {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp -> data << " <-> ";
        temp = temp -> next;
    }

    cout << endl;

    temp = tail;

    while (temp != NULL) {
        cout << temp -> data << " <-> ";
        temp = temp -> prev;
    }

    cout << endl;
}

// gives lenght of linked list
int getLength(Node* head) {
    int len = 0;

    Node* temp = head;

    while (temp != NULL) {
        len ++;
        temp = temp -> next;
    }

    return len;
}

// inserting node at any position
void insert (Node* &head,Node* &tail, int pos, int d) {

    // if position is negative or greater than length of linked list
    if(pos > getLength(head) + 1 || pos <= 0) {
        cout << "!! INVALID POSITION !!" << endl;
        return;
    }
    
    // inserting at head
    if(pos == 1) {
        Node* temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
        return;
    }

    // creating node to insert
    Node* temp = new Node(d);
    Node* curr = head;
    int curr_pos = 1;

    // traversing to the given position 
    while (curr_pos < pos - 1 && curr != NULL) {
        curr = curr -> next;
        curr_pos ++;
    }

    // inserting at last
    if(curr -> next == NULL) {
        curr -> next = temp;
        temp -> prev = curr;
        tail = temp;
        return;
    }

    // inserting at middle
    temp -> next = curr -> next;
    temp -> prev = curr;
    curr -> next = temp;
    temp -> next -> prev = temp;

}

void deleteNode (Node* &head, Node* &tail, int pos) {

    // if position is negative or greater than the lenght of linked list
    if(pos > getLength(head) || pos <= 0 ) {
        cout << "!! INVALID POSITION !!" << endl;
        return;
    }

    // deleting first or starting node
    if(pos == 1) {

        // if only one node present 
        if(head -> next == NULL) {
            Node* temp = head;
            head = NULL;
            tail = NULL;
            return;
        }
        
        Node* nodeToDelete = head;
        head = head -> next;
        head -> prev = NULL;
        nodeToDelete -> next = NULL;
        delete nodeToDelete;

        return;
    }


    Node* current = head;
    int curr_pos = 1;

    while (curr_pos < pos - 1) {
        current = current -> next;
        curr_pos++;
    }

    Node* nodeToDelete = current -> next;

    // deleting last node
    if(nodeToDelete -> next == NULL) {
        current -> next = NULL;
        nodeToDelete -> prev = NULL;
        tail = current;
        delete nodeToDelete;
        return;
    }

    // deleting middle node
    current -> next = nodeToDelete -> next;
    nodeToDelete -> next -> prev = nodeToDelete -> prev;
    nodeToDelete -> next = NULL;
    nodeToDelete -> prev = NULL;
    delete nodeToDelete;

}

int main () {

    Node* node = new Node(3);
    Node* head = node;
    Node* tail = node;
    print(head, tail);

    insert(head, tail, 1, 2);
    insert(head, tail, 1, 1);
    print(head, tail);

    insert(head, tail, 4, 6);
    insert(head, tail, 5, 7);
    print(head, tail);

    insert(head, tail, 4, 4);
    insert(head, tail, 5, 5);
    print(head, tail);

    deleteNode(head, tail, 7);
    deleteNode(head, tail, 6);
    print(head, tail);

    deleteNode(head, tail, 7);
    deleteNode(head, tail, 6);
    print(head, tail);

    deleteNode(head, tail, 3);
    deleteNode(head, tail, 2);
    print(head, tail);

}