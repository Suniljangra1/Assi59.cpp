#include<iostream>
using namespace std;
class Circular_Queue
{
    int array[10];
    int rare;
    int size;
    int front;
    public:
    Circular_Queue()
    {
        size =10;
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
        else if(rare == size-1)
        {
            cout<<"over flow ";
        }
        else
         {
            
            array[++rare] = v;
        }
    }
    void Dequeue()
    {
        if(front==-1)
        cout<<"under flow";
        else {
            for(int i=front; i<=rare; i++)
            {
                array[i] = array[1+i];
            }
            rare--;
        }
    }
    void Print()
    { 
        // for(int i=front; i<=rare; i++)
        // {
        //     cout<<array[i]<<" - ";
        // }
        int i=front;
        while(1)
        {
            cout<<array[i]<<" - ";
            
            if(i==rare)
            break;
            i = (i+1)%size;
            
        }
    }
    void Delete_end()
    {
        if(rare == size-1)
        {
            cout<<"over flow ";
        }
        else {
            array[--rare];
        }
    }
};
int main()
{
    Circular_Queue s;
    s.Enqueue(1);
    s.Enqueue(2);
    s.Enqueue(3);
    s.Enqueue(4);
    s.Enqueue(5);
    s.Enqueue(6);
    // s.Dequeue();
    s.Print();
}