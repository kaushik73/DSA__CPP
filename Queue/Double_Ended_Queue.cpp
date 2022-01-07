#include <bits/stdc++.h>
using namespace std;
#define N 5
int dequeue[N];
int f = -1, r = -1;
// queue full condition - front = rear+1;
// front==0 && rear = N-1

void EnqueueFront(int x)
{

    if ((f == 0) && (r == N - 1) || (f == r + 1))
    {

        cout << "Queue is Full - Enq_Front \n";
    }
    else if ((f == -1) && (r == -1))
    {
        f = r = 0;
        dequeue[f] = x;
    }

    else if (f == 0)
    {
        f = N - 1;
        dequeue[f] = x;
    }

    else
    {
        f--;
        dequeue[f] = x;
    }
}

void EnqueueRear(int x)
{
    // if ((f == -1) && (r == - 1))
    // {
    //     cout << "Queue is Full - Enq_Rear\n";
    // }
    if ((f == -1) && (r == -1))
    {
        f = r = 0;
        dequeue[r] = x;
    }
    else if (r = N - 1)
    {
        r = 0;
        dequeue[r] = x;
    }
    else
    {
        r++;
        dequeue[r] = x;
    }
}

void display()
{

    int i = f;
    while (i != r)
    {
        cout <<dequeue[i]<<" ";
        i=(i+1) % N;

    }
    cout<<"last is - "<<dequeue[r];
}
int main()
{
    EnqueueFront(4);
    // cout<<"Hii;";
    EnqueueFront(5);
    EnqueueRear(6);
    EnqueueFront(7);
    EnqueueRear(8);
    display();
}