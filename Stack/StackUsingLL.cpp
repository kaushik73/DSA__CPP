#include <iostream>
#include <stack>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    // int size;

    Node(int d)
    {
        next = NULL;
        data = d;
    }
};

Node *top = NULL;

void push(int data)
{
    if (top == NULL)
    {
        Node *newnode = new Node(data);
        top = newnode;
    }
    else
    {
        Node *newnode = new Node(data);
        newnode->next = top;
        top = newnode;
    }
}

void print()
{
    Node *temp = top;
    if (top == NULL)
    {
        cout << "Empty\n";
        return;
    }
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void pop()
{
    if (top != NULL)
    {
        top = top->next;
    }
    else
    {
        cout << "Underflow\n";
    }
}

bool isEmpty()
{
    return top == NULL;
}

int peek()
{
    return top->data;
}
int main()
{

    pop();
    cout << isEmpty() << endl;
    print();
    push(5);
    push(6);
    push(7);
    push(8);
    cout << "peek is :" << peek() << endl;
    push(9);
    push(10);
    print();
    pop();
    print();
    cout << "peek is :" << peek() << endl;
    cout << isEmpty() << endl;
}