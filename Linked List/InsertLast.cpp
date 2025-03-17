#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int Data;
    Node* next;
};

Node* Head;

void InsertFirst(int item)
{
    Node* nn=new Node;
    (*nn).Data=item;
    (*nn).next= Head;
    Head=nn;
}

void InsertLast(int item)
{
    if(Head==0)
    {
        InsertFirst(item);
        return;
    }

    Node* ptr=Head;

    while(ptr->next!=0)
    {
        ptr=ptr->next;
    }

    Node* nn= new Node;
    nn-> Data= item;
    nn->next=0;
    ptr->next=nn;
}

void Print()
{
    Node* ptr=Head;
    while(ptr!=0)
    {
        cout<<ptr->Data<<endl;
        ptr=ptr->next;
    }
}

int main()
{
    InsertFirst(9);
    InsertLast(5);
    Print();
}

