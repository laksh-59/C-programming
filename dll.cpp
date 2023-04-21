#include<iostream>
using namespace std;

class node
{
    public:
        node *prev;
        int item;
        node *next;
};

class dll
{   
    private:
        node *start;
    public:
        dll();
        void insertStart(int data);
        void displayList();
        void insertLast(int data);
};
void dll::insertLast(int data)
{
    node *n=new node;
    if(start)
    {
        n->next=start;
        n->prev=NULL;
        start->prev=n;
        n->item=data;
        start=n;
    }
    else
    {
        node *t;
        t=start;
        int i;
        for(i=1;t;i++)
        t=t->next;
        n->prev=t;
        t->next=n;
        n->item=data;
        n->next=NULL;

    }
}
void dll::insertStart(int data)
{
    node *n=new node;
    if(start)
    {
        n->next=start;
        n->prev=NULL;
        start->prev=n;
        n->item=data;
        start=n;
    }
    else
    {
        start=n;
        n->next=NULL;
        n->prev=NULL;
        n->item=data;
    }
}
void dll::displayList()
{
    int i;
    node *t;
    t=start;
    for(i=1;t;i++)
    {
        cout<<"node "<<i<<" = "<<t->item<<endl;
        t=t->next;
    }
}

dll::dll()
{
    start=NULL;
}

int main()
{
    dll l1;
    l1.insertStart(53);
    l1.displayList();
    l1.insertStart(43);
    l1.displayList();
    l1.insertLast(51);
    l1.displayList();
    return 0;
}