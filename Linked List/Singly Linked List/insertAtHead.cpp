
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
    cin>>choice;
    head = NULL;
    while (choice>0)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        cin >> newnode->data;
        newnode->next = NULL;
        if (head == NULL)
        {
            head = temp = newnode;
            temp->next = NULL;
        }
        else
        {
            newnode->next = temp;
            temp = newnode;
            head = temp;
        }
        choice--;
    }
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data <<endl;
        temp = temp->next;
    }
}