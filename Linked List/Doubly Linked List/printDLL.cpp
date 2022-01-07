#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct node
    {
        int data;
        struct node *next;
        struct node *prev;
    };
    struct node *head, *temp, *newnode;
    int choice;
    head = NULL;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        // cout << "Enter Data : ";
        cin >> newnode->data;
        newnode->prev = NULL;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        // cout << "Enter Choice : ";
        cin >> choice;
    }
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}