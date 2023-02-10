#include<iostream>
using namespace std;
class queue
{
    int array[100];
    int rare;
    int front;
    public:
    queue()
    {
        rare= -1;
        front= -1;
    }
    void Enqueue(int v)
    {
        if(front == -1)
        {
            front++,rare++;
            array[front]=v;
        }
        else if(rare == 100)
        {
            cout<<"over flow ";
        }
        else {
            array[++rare] = v;
        }
    }
    void Dequeue()
    {
        if(front==-1)
        cout<<"under flow";
        else {
            array[front++];
            rare--;
        }
    }
    void Reverse()
    {
        cout<<endl;
        for(int i=rare; i>=front; i--)
        cout<<array[i]<<" - ";
    }
    void Print()
    {
        for(int i=front; i<=rare; i++)
        {
            cout<<array[i]<<" ";
        }
    }
    
};
int main()
{
    queue s;
    s.Enqueue(1);
    s.Enqueue(2);
    s.Enqueue(3);
    s.Enqueue(4);
    s.Enqueue(5);
    s.Enqueue(6);
    s.Print();
    s.Reverse();
}