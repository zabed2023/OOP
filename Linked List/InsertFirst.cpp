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
    InsertFirst(5);
    InsertFirst(3);
    InsertFirst(7);
    InsertFirst(1);


    Print();
}
