// Q. Love Babbar

#include <bits/stdc++.h>
using namespace std;

int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *newnode, *head, *temp, *last;
    int choice;
    head = NULL;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        // cout << "Enter data : ";
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

        // cout << "Do you want to continue(0,1) : ";
        cin >> choice;
    }
    // Printing (Reverse) LL

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    struct node *current = head;
    struct node *next = NULL;
    struct node *prev = NULL;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    cout << "Current data : " << current->data;

    // int k, count = 0;
    // cout << "Enter Multiple : ";
    // cin >> k;
    // while (current != NULL)
    // {
    //     temp = head;
    //     for (int i = 0 + (3 * count); i < k; i++)
    //     {
    //         cout << temp->data << " ";
    //         temp = temp->next;
    //     }
    // }

    // Printing (Reverse) LL
    cout << "\nReverse of Your LL is : ";

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
