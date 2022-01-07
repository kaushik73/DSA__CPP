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
    struct node *head, *temp, *newnode, *last;
    int choice, position;
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
        last = temp;
        temp = temp->next;
    }
    // --------------------------------------------------------------------------------------------
    // Insert at begning :-
    // temp = head;
    // newnode = (struct node *)malloc(sizeof(struct node));
    // cout << "\nEnter Data for beginning add : ";
    // cin >> newnode->data;
    // newnode->prev = NULL;
    // newnode->next = NULL;
    // if (head == NULL)
    // {
    //     head = newnode;
    // }
    // else
    // {
    //     temp->prev = newnode;
    //     newnode->next = temp;
    //     head= newnode;
    // }
    // cout << "\nNow your ll is : \t";
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // --------------------------------------------------------------------------------------------
    // Insert at end :-
    // newnode = (struct node *)malloc(sizeof(struct node));
    // cout << "\nEnter Data for end add : ";
    // cin >> newnode->data;
    // newnode->next = NULL;
    // newnode->prev = last;
    // last->next = newnode;
    // temp = head;
    // while (temp != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }

    // --------------------------------------------------------------------------------------------
    // Insert at any position :-
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter position : ";
    cin >> position;
    int i = 2;
    cout << "\nEnter Data after position : ";
    cin >> newnode->data;

    temp = head;
    while (i < position)
    {
        temp = temp->next;
        i++;
    }
    temp->next->prev = newnode;
    newnode->next = temp->next;
    temp->next = newnode;
    newnode->prev = temp;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}