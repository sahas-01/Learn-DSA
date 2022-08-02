#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void printList(Node *temp)
{
    int count = 0;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl
         << count;
}

// Inserting at beginning of linked list
void insertBeginningOfList(Node *&head, int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->next = head;
    head = temp;
}

void insertEndOfList(Node *&tail, int data)
{
    tail->data = data;
    tail->next = NULL;
}

// Inserting at given position in linked list
void insertAtPosition(Node *&head, int data, int position)
{
    // temp1 used to iterate over linked list & temp is used to store data to be inserted
    Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    Node *temp1 = head;
    int count = 0;
    while (temp1 != NULL)
    {
        if (count == position - 1)
        {
            temp->next = temp1->next;
            temp1->next = temp;
            break;
        }
        temp1 = temp1->next;
        count++;
    }
}

void deleteNode(Node *&head, int position)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        if (count == position)
        {
            temp->next = temp->next->next;
            break;
        }
        temp = temp->next;
        count++;
    }
}

int main()
{
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *tail = new Node();
    // Node obj;
    // Putting data in head
    head->data = 1;
    head->next = second;

    // Putting data in second
    second->data = 2;
    second->next = third;

    // Putting data in third
    third->data = 3;
    third->next = tail;

    // Insert at beginning of list
    insertBeginningOfList(head, 12);
    // Insert at end of list
    insertEndOfList(tail, 4);
    // Insert at given position in list
    insertAtPosition(head, 5, 5);
    // Delete a node from the list
    // deleteNode(head, 0);
    // Printing the linked list
    printList(head);

    return 0;
}