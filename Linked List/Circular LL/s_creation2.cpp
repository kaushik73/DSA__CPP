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
    // ~Node(){

    // }
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
void insert_at_pos(int d, int element, Node *&tail)
{
    if (tail == NULL)
    {
        // empty list
        Node *newnode = new Node(d);
        tail = newnode; // delete vaale code m yaha se aa rahi hai problem
        newnode->next = newnode;
    }
    else
    {
        // non empty list
        Node *current = tail;
        while (current->data != element)
        {
            current = current->next;
        }
        // element found
        Node *newnode = new Node(d);
        newnode->next = current->next;
        newnode->prev = current;

        current->next = newnode;
        newnode->next->prev = newnode;
    }
}
void deleteatPos(Node *&tail, int element)
{
    Node *prev = tail;
    Node *curr = prev->next;
    if (tail == NULL)
    {
        // list is empty
        cout << "List is empty please check again" << endl;
    }
    else
    { // assuming element is present in list

        while (curr->data != element)
        {
            // temp = curr;
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        if (curr == prev)
        {
            tail = NULL;
        }
        // first element delete karne pe tail m gadbaad ho rhai thi LINE 35
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
int print1(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty\n";
    }
    else
    {

        Node *temp = tail;

        while (tail->next != temp)
        {
            // cout<<"while loop \n";
            cout << tail->data << " ";
            tail = tail->next;
        }
        cout << tail->data << endl;
        return 0;
    }
}

int main()
{
    Node *tail = NULL;
    insert_at_pos(5, 300, tail); // at first position
    print1(tail);
    insert_at_pos(23, 5, tail);
    insert_at_pos(25, 23, tail);
    insert_at_pos(26, 25, tail); // at last
    insert_at_pos(27, 26, tail); // at last
    insert_at_pos(28, 27, tail); // at last
    insert_at_pos(24, 23, tail); // at middle
    print1(tail);
    deleteatPos(tail, 23); // middle element delete
    print1(tail);
    deleteatPos(tail, 26); // last element delete
    print1(tail);
    deleteatPos(tail, 5); // first element delete
    print1(tail);
}