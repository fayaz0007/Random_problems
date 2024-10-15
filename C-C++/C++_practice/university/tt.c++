#include <iostream>
using namespace std;

struct Node {
    char data;
    Node* next;
};

// Function to insert characters into the linked list
void insert(Node*& head, char data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

// Function to print the linked list
void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Function to search for a character in the linked list and count occurrences
// int searchChar(Node* head, char searchChar) {
//     int count = 0;
//     while (head != nullptr) {
//         if (head->data == searchChar)
//             count++;
//         head = head->next;
//     }
//     return count;
// }

// Function to find the size of the linked list
// int listSize(Node* head) {
//     int size = 0;
//     while (head != nullptr) {
//         size++;
//         head = head->next;
//     }
//     return size;
// }

int main() {
    Node* head = nullptr;
    
    // Creating the linked list: A -> F -> G -> A -> M -> A
    insert(head, 'A');
    insert(head, 'M');
    insert(head, 'A');
    insert(head, 'G');
    insert(head, 'F');
    insert(head, 'A');
    
    cout << "Linked List: ";
    printList(head);

    // Searching for character 'A'
    // char searchChar = 'A';
    // int count = searchChar(head, searchChar);
    // cout << searchChar << " appears " << count << " times in the linked list." << endl;
    
    // Finding size of the linked list
    // int size = listSize(head);
    // cout << "The size of the linked list is: " << size << endl;

    return 0;
}
