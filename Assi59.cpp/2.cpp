#include<iostream>
using namespace std;
class node 
{
    public:
    int value;
    node *next;
    node()
    {
        next =NULL;
        value=0;
    }

};
class Queue_list
{
    node *head;
    public:
    Queue_list()
    {
        head = NULL;
    }
    void Enqueue(int v)
    {
        node *temp = new node();
        temp->value= v;
        if(head== NULL)
        head = temp;
        else 
        {
            node *s= head;
            while(s->next!=NULL)
            {
                s=s->next;
            }
            s->next= temp;
        }
    }
    void Print()
    {
        node *t = head;
        while(t!=NULL)
        {
            cout<<t->value<<" <-> ";
            t=t->next;
        }
    }
    void Dequeue()
    {
        node *t = head;
        head= head->next;
        if(t->next==NULL)
        cout<<"\nQueue Empty";
        delete t;
    }
};
int main()
{
    Queue_list s;
    s.Enqueue(6);
    s.Enqueue(5);
    s.Enqueue(9);
    s.Enqueue(67);
    
    s.Print();
}