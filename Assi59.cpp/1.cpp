#include<iostream>
using namespace std;
class Dynamic_queue
{
    int *Qu;
    int front;
    int capicity;
    int rare ;
    void Resize_queue()
    {
        int *temp = new int [capicity*2];
        for(int i=0; i<rare; i++)
        {
            temp[i]= Qu[i];
        }
        delete Qu;
        Qu = temp;
        capicity = 2*capicity;
    }
    public:
    Dynamic_queue()
    {
        Qu = new int[1];
        front = 0;
        capicity = 1;
        rare =0;
    }
    void insert_Enqueue(int v)
    {
       if(rare == capicity)
        Resize_queue();
         
        {
            Qu[rare]= v;
            rare++;
           front=0;
        }
        
    }
    void Print()
    {
        for (int i=front; i<=rare-1; i++)
        {
            cout<<Qu[i]<<" - ";
        }
        cout<<"\nsize is "<<rare;
        cout<<"\ncapicity is "<<capicity;
    }
    void Dequeue()
    {
        if(rare==0)
        cout<<"\nqueue is enmpty";
        cout<<"\nDeleted "<<Qu[front]<<endl;
        front++;
    }
};
int main()
{
    Dynamic_queue r;
    r.insert_Enqueue(8);
    r.insert_Enqueue(6);
    r.insert_Enqueue(5);
    r.insert_Enqueue(3);
    r.insert_Enqueue(10);
    r.Dequeue();
    r.Dequeue();
    r.Print();
}