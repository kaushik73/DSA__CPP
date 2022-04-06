// Creating Singly Circular LL with head  pointer
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    Node *prev;
    Node *next;
    int data;
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};
void get_length(Node *&head)
{
    Node *temp = head;
    int cnt;
    while (temp->next != head)
    {
        temp = temp->next;
        cnt++;

    }
}
void insert_at_pos(int data, int pos, Node *&head, Node *&tail)
{
    Node *newnode = new Node(data);
    if (pos == 1)
    {
        cout<<"pos1 called\n";
        head->prev = newnode;
        newnode->next = head;
        head = newnode;
        newnode->prev = tail;
    }
    // else if ()
    else
    {
        cout<<"else called\n";
        Node *temp = head;
        int c = 2;
        while (c < pos)
        {
            temp = temp->next;

            pos--;
        }
        newnode->prev = temp;
        newnode->next = temp->next;
        // temp->next->prev = newnode;
        temp->next = newnode;
        // newnode->next = temp;
    }
}

int print1(Node *head)
{
    cout<<"print 1 fnction call\n";
    Node *temp = head;

    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
    return 0;
}

int main()
{
    Node *temp;
    Node *node1 = new Node(4);
    Node *head = node1;
    Node *tail = node1;

    insert_at_pos(34, 1, head, tail);
    insert_at_pos(37, 2, head, tail);
    insert_at_pos(36, 4, head, tail);
    print1(head);
    cout<<"Checking for circular";
    cout<<"Check\n";
    temp = head;
    while (temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data; // for last node print

    cout << "\nCheck for Circular : ";
    cout << temp->next->data << " \n"; // as before this temp is on last node
}