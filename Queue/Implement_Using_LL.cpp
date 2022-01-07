#include <bits/stdc++.h>
using namespace std;
// In this Program we have not fixed the size of array i.e. this is a dynamic type of implementation of Queue.

struct node
{
    int data;
    struct node *next;
} *front = 0, *rear = 0;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if ((front == 0) && (rear == 0))
    {
        cout<<"1st element added\n";
        front = rear = newnode;
    }
    else
    {
        cout<<"element  added\n";
        rear->next = newnode;
        rear = newnode;
    }
}
void dequeue()
{
    struct node *temp = front;
    cout<<"Top Element is removed\n";
    front = front->next;
    free(temp); 
}

void display()
{
    if ((front == 0) && (rear == 0))
    {
        cout << "Queue is empty \n";
    }
    else
    {
        struct node *temp = front;
        cout<<"Elements of Queue are\t ";
        while (temp!= NULL)
        {
            cout << temp->data << " ";
            temp  = temp->next;
        }
        cout<<endl;
    }
}
void peek()
{
    if ((front == 0) && (rear == 0))
    {
        cout << "Queue is empty \n";
    }
    else{
    cout << "First Element of Queue is " << front;
    }
}


int main(){
    enqueue(5);
    enqueue(0);
    enqueue(-3);
    display();
    dequeue();
    display();
}
