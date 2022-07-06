// Creating Singly Circular LL with tail pointer
#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    } * newnode, *tail = NULL, *temp;
    int choice = 1;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter Data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        if (tail == NULL)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = tail->next; // for circular last node me head ka address
            tail->next = newnode;
            tail = newnode;
        }
        cout << "Enter Choice : ";
        cin >> choice;
    }
    // cout<<"Tail->data : "<<tail->data<<endl;
    temp = tail->next; // first node address
    // cout<<"temp->data : "<<temp->data<<endl;

    while (temp->next != tail->next)
    {
        // {   cout<<"this is w loop";
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data; // for last node print
}