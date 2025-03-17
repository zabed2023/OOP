#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int Data;
    Node* next;
};

Node* Head; // Initialize Head to NULL

void InsertFirst(int item)
{
    Node* nn = new Node;
    nn->Data = item;
    nn->next = Head; //makes the new node point to the previous first node.
    Head = nn; //updates Head to the new first node
}

void reverseList()
{
    Node* prev = NULL;
    Node* curr = Head;
    Node* next = NULL;

    while (curr != NULL)
    {
        next = curr->next;// Store the next node
        curr->next = prev;// Reverse the current node's pointer
        prev = curr;// Move prev to current node
        curr = next;// Move current to next node
    }
    Head = prev; // Update Head to new first node
}

void Print()
{
    Node* ptr = Head;
    while (ptr != NULL)
    {
        cout << ptr->Data << " ";
        ptr = ptr->next;
    }
    cout << endl; 
}

int main()
{
    InsertFirst(5);
    InsertFirst(3);
    InsertFirst(7);
    InsertFirst(1);

    cout << "Original List: ";
    Print();

    reverseList(); // Reverse the linked list

    cout << "Reversed List: ";
    Print(); // Print the reversed list

    return 0;
}
