#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void insertNode(Node *&tail, int val, int element)
{
    Node *newnode = new Node(val);
    if (tail == NULL)
    {
        tail = newnode;
        newnode->next = newnode;
    }
    else
    {
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        Node *temp1 = curr->next;
        newnode->next = temp1;
        curr->next = newnode;
    }
}

void deleteNode(Node *&tail, int val)
{
    if (tail == NULL)
    {
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != val)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // updating tail :
        // 1 node LL
        if (curr == prev)
        {
            tail == NULL;
        }
        // >=2 node LL
        else if (tail == curr)
        {
            tail = prev;
        }
    }
}
int getLength(Node *tail)
{
    int cnt = 1;
    Node *temp = tail;

    while (tail->next != temp)
    {
        tail = tail->next;
        cnt++;
    }
    return cnt;
}
void print(Node *tail)

{

    Node *temp = tail;

    // empty list
    if (tail == NULL)
    {
        cout << "List is Empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

bool isCircularList(Node *tail)
{
    // empty list
    if (tail == NULL)
    {
        return false;
    }

    Node *temp = tail->next;
    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }

    if (temp == tail)
    {
        return true;
    }
    return false;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 11, 5);
    print(tail);
    insertNode(tail, 7, 5);
    print(tail);
    insertNode(tail, 15, 7);
    print(tail);

    insertNode(tail, 9, 15);
    print(tail);
    insertNode(tail, 3, 9);
    print(tail);

    // print(tail);
    cout << " \n Size is : "
         << getLength(tail) << endl;

    cout << " --- " << tail->data << " --- ";
    deleteNode(tail, 11);
    deleteNode(tail, 5);
    cout << " --- " << tail->data << " ---\n ";
    print(tail);

    cout << endl;
    if (isCircularList(tail))
    {
        cout << " Linked List is Circular in nature" << endl;
    }
    else
    {
        cout << "Linked List is not Circular " << endl;
    }
}
