
#include <iostream>
using namespace std;

// Node structure
struct Node
{
    int data;
    Node* prev;
    Node* next;
};

// Insert node at the end
void insertAtEnd(Node*& head, int value)
{
    Node* newNode = new Node();

    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    // If list is empty
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    // Move to the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connect new node
    temp->next = newNode;
    newNode->prev = temp;
}

// Display list in forward direction
void displayForward(Node* head)
{
    Node* temp = head;

    cout << "Forward: ";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

// Display list in backward direction
void displayBackward(Node* head)
{
    if (head == NULL)
        return;

    Node* temp = head;

    // Move to the last node
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    cout << "Backward: ";

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL" << endl;
}

int main()
{
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    displayForward(head);
    displayBackward(head);

    return 0;
}

