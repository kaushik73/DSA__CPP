
#include <bits/stdc++.h>
using namespace std;
struct node
{
    float data;
    struct node *next;
};
void print_it(node *temp)
{
    // int temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{

    struct node *newnode, *head, *temp, *last;
    int choice;
    int cnt = 1;
    head = NULL;
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter " << cnt << " data : ";
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
        cnt++;
        cout << "Do you want to continue(0,1) : ";
        cin >> choice;
    }
    cout << "Your LL is : \t";
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // -----------------------------------------------------------------------
    // Inserting node at begning position :-
    // newnode = (struct node *)malloc(sizeof(struct node));
    // cout << "\nEnter data for insert at begning position : ";
    // cin >> newnode->data;
    // newnode->next = head;
    // head = newnode;
    // temp = head;
    // print_it(temp);
    // ------------------------------------------------------------------------
    // Inserting node at end position :-
    // newnode = (struct node *)malloc(sizeof(struct node));
    // cout << "\nEnter data for insert at end position : ";
    // cin >> newnode->data;
    // newnode->next = NULL;
    // temp = head;
    // if (head == NULL)
    //     head = newnode;
    // while (temp->next != NULL)
    // {
    //     temp = temp->next;
    // }
    // temp->next = newnode;
    // cout << "New LL is : \n";
    // temp = head;
    // print_it(temp);
    // -------------------------------------------------------------------------
    // Inserting node at any  position :-
    newnode = (struct node *)malloc(sizeof(struct node));
    int pos;
    cout << "\nEnter position of new node to be inserted : ";
    cin >> pos;
    cout << "\nEnter data for position " << pos << " : ";
    cin >> newnode->data;
    temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
    temp = head;
    print_it(temp);
}