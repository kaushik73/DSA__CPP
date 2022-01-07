// Creating Singly Circular LL with head and tail pointer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    } *head = NULL, *newnode, *tail;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter Data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            // tail->next = head; //line30
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
            // tail->next = head; //line30
        }
        tail->next = head; //for joinning last node to first

        cout << "Enter Choice : ";
        cin >> choice;
    }
    struct node * trav;
    trav= head;
    while (trav->next != head)
    {
        cout << trav->data << " ";
        trav = trav->next;
        // tail = head;
    }
    cout << trav->data; //for last node print
}