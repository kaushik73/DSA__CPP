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
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
        cout << "Enter Choice : ";
        cin >> choice;
    }

    temp = tail->next;

    while (temp->next != tail->next)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;

    // Delete at beg
    // temp = tail->next;

    // if (temp->next == temp)
    // {
    //     tail = NULL;
    //     free(temp);
    // }
    // else{
    //    // temp = tail->next; already done
    //     tail->next = temp->next;
    //     free(temp);
    // }

    // Delete at last

    //     struct node *current;
    //     struct node *prev;
    //     current = tail->next;

    //     while (current->next != tail->next)
    //     {
    //         prev = current;
    //         current = current->next;
    //     }
    //     prev->next = tail->next;
    //     tail = prev;
    //     free(current);
    // //printing

    //     temp = tail->next;
    //     while (temp->next != tail->next)
    //     {

    //         cout << temp->data << " ";
    //         temp = temp->next;
    //     }
    //     cout << temp->data << endl;

    // Delete from any position
    int pos;
    cin >> pos;

    struct node *current;
    struct node *prev;
    current = tail->next;
    for (int i = 1; i < pos; i++)
    {
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    free(current);

    // //printing

        temp = tail->next;
        while (temp->next != tail->next)
        {

            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << temp->data << endl;
}