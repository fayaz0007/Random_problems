#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};
Node* head = nullptr;


void insertAtFirst(int data) {
    Node* newNode = new Node();  
    newNode->data = data;        
    newNode->next = head;        
    head = newNode;              
}


void insertAtLast(int data) {
    Node* newNode = new Node();  
    newNode->data = data;
    newNode->next = nullptr;     

    if (head == nullptr) {       
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {  
            temp = temp->next;
        }
        temp->next = newNode;  
    }
}


void insertAtMiddle(int data, int position) {
    Node* newNode = new Node();  
    newNode->data = data;

    if (position == 1) { 
        insertAtFirst(data);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {  
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }

    newNode->next = temp->next;  
    temp->next = newNode;
}


void deleteFromFirst() {
    if (head == nullptr) {  
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    head = head->next;  
    delete temp;     
}


void deleteFromLast() {
    if (head == nullptr) {  
        cout << "List is empty" << endl;
        return;
    }

    if (head->next == nullptr) { 
        delete head;
        head = nullptr;
        return;
    }

    Node* temp = head;
    while (temp->next->next != nullptr) { 
        temp = temp->next;
    }

    delete temp->next;  
    temp->next = nullptr;  
}


void deleteFromMiddle(int position) {
    if (head == nullptr) { 
        cout << "List is empty" << endl;
        return;
    }

    Node* temp = head;
    for (int i = 1; i < position - 1 && temp->next != nullptr; i++) {  
        temp = temp->next;
    }

    if (temp->next == nullptr) {
        cout << "Position out of bounds" << endl;
        return;
    }

    Node* deleteNode = temp->next;  
    temp->next = temp->next->next;  
    delete deleteNode;              
}

void printList() {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    insertAtFirst(10);
    insertAtLast(20);
    insertAtMiddle(15, 2);
    insertAtLast(30);
    insertAtFirst(5);
    
    
    cout << "Linke List after insertions: ";
    printList();

    deleteFromFirst();
    deleteFromLast();
    deleteFromMiddle(2);

    cout << "Linke List after deletions: ";
    printList();

    return 0;
}
