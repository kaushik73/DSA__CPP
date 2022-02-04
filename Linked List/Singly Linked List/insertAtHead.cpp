#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // constuctor
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    // ~Node() {}
};

void insertAtTail(Node *&tail, int data)
{
    Node *newnode = new Node(data);
    tail->next = newnode;
    tail = newnode;
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void deleteNode(int position, Node* & head) { 

    //deleting first or start node
    if(position == 1) {
        Node* temp = head;
        head = head -> next;
        //memory free start ndoe
        temp -> next = NULL;
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < position) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }

        prev -> next = curr -> next;
        curr -> next  = NULL;
        delete curr;

    }
}
int main()
{
    Node *node1 = new Node(4);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtTail(tail, 11);
    insertAtTail(tail, 14);
    insertAtTail(tail, 15);
    insertAtTail(tail, 17);
    print(head);
    deleteNode(1,head);
    print(head);
}