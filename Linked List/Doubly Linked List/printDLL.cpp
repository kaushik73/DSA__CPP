#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print_it(Node *temp)
{
}

void InsertatHead(Node *&head, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
    }
    else
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
void InsertAtTail(Node *&head, int d)
{
    Node *newNode = new Node(d);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void insetAtPos(Node *&head, int d, int pos)
{
    if (pos == 1)
    {
        InsertatHead(head, d);
    }
    else
    {
        Node *newNode = new Node(d);
        int c = 2;
        Node *temp = head;
        while (c < pos)
        {
            temp = temp->next;
            c++;
        }
        Node *temp2 = temp->next;
        newNode->prev = temp;
        temp->next = newNode;
        newNode->next = temp2;
        if (temp2 != NULL)
            temp2->prev = newNode;
    }
}

void deleteAtPos(Node *&head, int pos)
{
    // For one Node :
    Node *temp = head;
    for (int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }
    // first node
    if (pos == 1)
    {
        head = head->next;
    }
    // last node
    else if ((temp->next == NULL))
    {
        temp->prev->next = NULL;
    }

    // Other
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
}

void print(Node *head)
{
    cout << "print ---";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    InsertatHead(head, 3);
    InsertatHead(head, 4);
    InsertAtTail(head, 5);
    InsertAtTail(head, 6);
    print(head);
    insetAtPos(head, 1, 5);
    insetAtPos(head, 9, 3);
    print(head);

    deleteAtPos(head, 3);
    print(head);
    deleteAtPos(head, 1);
    print(head);
    deleteAtPos(head, 4);
    print(head);
}