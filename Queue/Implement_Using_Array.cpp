#include <bits/stdc++.h>
#define N 7
using namespace std;
int Queue[N];
int front = -1;
int rear = -1;

// In this Program we have fixed the size of array i.e. this is a static type of implementation of Queue.

void enqueue(int x)
{
    if (rear == N - 1)
    {
        cout << "OverFlow\n";
    }
    else if ((front == -1) && (rear == -1))
    {
        front = rear = 0;
        Queue[rear] = x;
    }
    else
    {
        rear++;
        Queue[rear] = x;
    }
}
void dequeue()
{
    if ((front == -1) && (rear == -1))
    { //Condition of empty Queue
        cout << "Underflow\n";
    }
    else if (front == rear)
    { //Only 1 element is present in Queue
        cout << Queue[front] << " is deleted\n";

        front = rear = -1;
    }
    else
    {
        cout << Queue[front] << " is deleted\n";
        front++;
    }
}
void display()
{
    if ((front == -1) && (rear == -1))
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        cout << "Our Queue is \t";
        for (int i = front; i < rear + 1; i++)
        {
            cout << Queue[i] << " ";
        }
        cout << "\n";
    }
}
void peek()
{
    cout << "Front of Queue is : " << Queue[front] << endl;
}

int main()
{
    enqueue(4);
    enqueue(7);
    enqueue(8);
    enqueue(9);
    display();
    peek();
    dequeue();
    dequeue();
    display();
    peek();
}
