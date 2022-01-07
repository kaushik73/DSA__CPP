#include <bits/stdc++.h>
using namespace std;
int main()
{
    struct node
    {
        int data;
        struct node *next;
    };

    struct node *newnode, *head, *temp, *prev;
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
    cout << "\nYour LL is \t";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // ---------------------------------------------------------------------------------------
    // Delete a node from begning :-
    // head = head->next;
    // temp = head;
    // // head = temp->next;
    // cout << "\nNode deleted from begning Your LL is \t";
    // while (temp != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;

    // ---------------------------------------------------------------------------------------
    // Delete a node from end :-
    // temp = head;
    // while (temp->next != NULL)
    // {
    //     prev = temp;
    //     temp = temp->next;
    // }
    // prev->next = NULL;
    // temp = head;
    // cout << "\nNode deleted from end Your LL is \t";
    // while (temp != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << endl;

    // ---------------------------------------------------------------------------------------
    // Delete a node from any position :-
    int pos;
    cout << "Enter position to be deleted : ";
    cin >> pos;
    temp = head;

    for (int k = 1; k < pos; k++)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}