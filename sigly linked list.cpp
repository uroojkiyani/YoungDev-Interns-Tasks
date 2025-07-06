#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Head pointer for the linked list
Node* head = nullptr;

// Function to insert a node at the end
void insert(int value) {
    Node* newNode = new Node();  // Create new node
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        head = newNode;  // First node
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Traverse to last node
        }
        temp->next = newNode;
    }
    cout << "Inserted: " << value << endl;
}

// Function to delete a node by value
void deleteNode(int value) {
    Node* temp = head;
    Node* prev = nullptr;

    while (temp != nullptr && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Value " << value << " not found.\n";
        return;
    }

    if (prev == nullptr) {
        head = temp->next;  // Deleting head
    } else {
        prev->next = temp->next;
    }

    delete temp;
    cout << "Deleted: " << value << endl;
}

// Function to display the linked list
void display() {
    Node* temp = head;
    if (temp == nullptr) {
        cout << "List is empty.\n";
        return;
    }

    cout << "Linked List: ";
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Main function
int main() {
    insert(10);
    insert(20);
    insert(30);
    display();

    deleteNode(20);
    display();

    deleteNode(100); // Not in list
    display();

    return 0;
}
