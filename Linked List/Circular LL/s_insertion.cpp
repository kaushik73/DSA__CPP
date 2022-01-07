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

    // Insert at beg
    // newnode = (struct node *)malloc(sizeof(struct node));
    // cout << "\nEnter Data for beginning add : ";
    // cin >> newnode->data;
    // newnode->next = NULL;
    // if (tail == NULL)
    // {
    //     tail = newnode;
    //     tail->next = newnode;
    // }
    // else
    // {
    //     newnode->next = tail->next;
    //     tail->next = newnode;
    // }
    // temp = tail->next;

    // while (temp->next != tail->next)
    // {

    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << temp->data << endl;


// Insert at End :-   
    // newnode = (struct node *)malloc(sizeof(struct node));
    // cout << "\nEnter Data for beginning add : ";
    // cin >> newnode->data;
    // newnode->next = NULL;
    // {
    //     newnode->next = tail->next;
    //     tail->next = newnode;
    //     tail = newnode;
    // }
    // temp = tail->next;

    // while (temp->next != tail->next)
    // {

    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    // cout << temp->data << endl;

// Insert at any position :-
int pos;
cin>>pos;
newnode = (struct node *)malloc(sizeof(struct node));
    cout << "\nEnter Data for beginning add : ";
    cin >> newnode->data;
    newnode->next = NULL;
temp = tail->next;
for (int i = 2; i < pos; i++)
{
temp = temp->next;
}
newnode->next = temp->next;
temp->next = newnode;


temp = tail->next;
cout<<"\nNew LL is \n";
    while (temp->next != tail->next)
    {

        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;


}