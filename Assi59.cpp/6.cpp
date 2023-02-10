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
        value = 0;
        next = NULL;
        pre = NULL;
    }
};
class Queue_Duble_list
{
    node *head;
    public:
    Queue_Duble_list()
    {
        head = NULL;
    }
    void Insert_(int v)
    {
        node *temp = new node();
        temp->value= v;
        if(head == NULL)
        {
            head = temp;
        }
        else {
            node *s =  head;
             while(s->next!=NULL)
             {
                s= s->next;
             }
             s->next = temp;
             temp->pre =s;
        }
    }
    void insert_Begin(int v)
    {
        node *temp = new node();
        temp->value = v;
        if(head == NULL)
        head = temp;
        else {
            // node *s = head;
            head ->pre = temp;
            temp->next = head;
            head = temp;
        }
    }
    void Print ()
    {
        node *s = head;
         while(s!=NULL)
         {
            cout<<s->value<<" <=> ";
            s = s->next;
         }
    }
    void Delete_end()
    {
        node *s = head;
        while(s->next->next!=NULL)
        {
            s=s->next;
        }
         node *t;
         t= s->next;
         s->next = NULL;
         delete t;
        
    }
    void Delete_Begin()
    {
        if(head == NULL)
        return ;
        else 
        {
            node *s = head;
            head = head->next;
            head->pre = NULL;
            delete s;
        }
    }
};
int main()
{
    Queue_Duble_list s;
    s.Insert_(9);
    s.Insert_(8);
    s.Insert_(6);
    s.Insert_(5);
    s.Insert_(7);
    s.insert_Begin(78);
    s.Delete_end();
    s.Delete_Begin();
    s.Print();
}