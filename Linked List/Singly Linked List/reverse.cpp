// Reverse of a Singly LL
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
    // int choice;
    head = NULL;
    int choice = 3;
    while (choice >= 1)
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
        choice--;
    }

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\nReverse of Your LL is : ";

    // Main Code Start
    struct node *current = head;
    struct node *next = NULL;
    struct node *prev = NULL;
    while (current != NULL)
    {
        next = current->next; // next ↑
        current->next = prev; // Main ↑
        prev = current;       // prev ↑
        current = next;       // current ↑
    }
    head = prev;
    // Main Code end

    // printing LL
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
