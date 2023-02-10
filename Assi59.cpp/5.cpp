#include<iostream>
using namespace std;
class node 
{
    public:
    int value;
    node *next;
    node *pre;
    node()
    {
        value =0;
        next = NULL;
        pre = NULL;
    }
};
class Priroty_Queue
{
    node *head;
    public:
    Priroty_Queue()
    {
        head = NULL;
    }
    void Enqueue(int v)
    {
        node *t = new node();
        t->value = v;
        if(head == NULL)
        head = t;
        else {
            node *s= head;
            while(s->next!=NULL)
            {
                s=s->next;
            }
            s->next = t;
            t->pre = s;
        }
    }
    void Print()
    {
        node *s = head;
        while(s!=NULL)
        {
            cout<<s->value<<" <-> ";
            s= s->next;
        }
    }
    int Search(int mi)
    {
        node *s = head;
        int c=0;
         while(s->next!=NULL)
         {
            c++;
            if(s->value == mi)
            break;
            s=s->next;
         }
         return c;
    }
    void Deque()
    {
        
        int min=-999999;
        node *s = head,*t=head;
        while(s!=NULL)
        {
            if(min < s->value)
            min = s->value;
            s=s->next;
        }
        int n=Search(min);
        while(n>2)
        {
            n--;
            if(t->next!=NULL)
            t=t->next;
        }
        t->next=t->next->next;
        // t->next->next->pre = t;
    }
    
};
int main()
{
    Priroty_Queue p;
    p.Enqueue(8);
    p.Enqueue(9);
    p.Enqueue(400);
    p.Enqueue(50);
    p.Enqueue(1000);
    p.Enqueue(15);
    p.Deque();
    // p.Deque();
    p.Print();
}