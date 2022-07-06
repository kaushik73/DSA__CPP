#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory free for node with data " << val << endl;
    }
};

// traversing a linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives length of Linked List
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp << " ---- ";
        len++;
        temp = temp->next;
    }

    return len;
}
void insertAtHead(Node *&tail, Node *&head, int d)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAtTail(Node *&tail, Node *&head, int d)
{
    Node *newnode = new Node(d);
    newnode->prev = tail;
    tail->next = newnode;
}
void insertAtTail2(Node *&head, int d)
{
    Node *newnode = new Node(d);
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    newnode->prev = temp;
    temp->next = newnode;
}

void insertAtPos(Node *&tail, Node *&head, int d, int pos)
{
    if (pos == 1)
    {
        insertAtHead(tail, head, d);
    }
    else
    {
        Node *newnode = new Node(d);
        Node *temp = head;
        int cnt = 2;
        while (cnt < pos)
        {
            temp = temp->next;
            Node *newnode = new Node(d);
            pos--;
        }
        Node *temp2 = temp->next;
        newnode->prev = temp;
        newnode->next = temp2;
        temp2->prev = newnode;
        temp->next = newnode;
    }
    Node *newnode = new Node(d);
    newnode->prev = tail;
    tail->next = newnode;
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    insertAtHead(tail, head, 11);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtHead(tail, head, 13);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtHead(tail, head, 8);
    print(head);
    cout << "head  " << head->data << endl;
    cout << "tail  " << tail->data << endl;

    insertAtTail(tail, head, 42);
    print(head);
    insertAtTail2(head, 43);
    print(head);
    cout << head << "_______";
    cout << getLength(head) << endl;

    insertAtPos(tail, head, 23, 3);
    print(head);
}