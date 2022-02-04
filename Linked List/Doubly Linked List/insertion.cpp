#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void print_it(node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void any_pos(node *head)
{
    int pos;
   struct node *temp = head;
    node * newnode = new node();
    cout << "\n Enter position : ";
    cin>>pos;
    cin >> newnode->data;
    newnode->prev = NULL;
    newnode->next = NULL;
    for(int i=2;i<pos;i++){
        temp = temp->next;
    }
    newnode->prev= temp;
    newnode->next= temp->next;
    temp->next = newnode;
    temp->next->prev = newnode;
    print_it(head);
}

int main()
{

    struct node *head, *temp, *newnode, *last;
    int choice, position;
    head = NULL;
    while (choice)
    {
        // newnode = (struct node *)malloc(sizeof(struct node));
        node *newnode = new node();
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
        last = temp; // pointer pointing to last node of our LL.
        temp = temp->next;
    }
    // --------------------------------------------------------------------------------------------
    // Insert at begning :-
    // newnode = (struct node *)malloc(sizeof(struct node));
    // cout << "\nEnter Data for beginning add : ";
    // cin >> newnode->data;
    // newnode->prev = NULL;
    // newnode->next = NULL;
    // temp = head;
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
    any_pos(head);
    
}