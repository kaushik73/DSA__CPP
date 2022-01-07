#include <bits/stdc++.h>
#define N 7
using namespace std;
int Queue[N];
int front = -1;
int rear = -1;
// circular Queue
void enqueue(int x)
{

    if ((front == -1) && (rear == -1))
    {
        front = rear = 0;
        Queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        cout << "Queuue is Full";
    }
    else
    {
        rear = (rear + 1) % N;
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
        front = (front + 1) % N;
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
        int i;
        cout << "Our Queue is \t";
        while (i != rear)
        {
            cout << Queue[i] << " ";
            i = (i + 1) % N;
        }
        cout << Queue[rear];
    }
}

void peek()
{
    cout << "Front of Queue is : " << Queue[front] << endl;
}

int main(){

    cout<<"hII";
    return 0;
}