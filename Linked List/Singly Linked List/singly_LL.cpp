
#include<bits/stdc++.h>
using namespace std;
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *newnode, *head, *temp;
    int choice;
    head = NULL;
    while (choice)
    {
    newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }

        cout << "Do you want to continue(0,1) : ";
        cin >> choice;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}