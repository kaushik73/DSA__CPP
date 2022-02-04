#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *next; // it is a pointer points to a data type of struct node.
    struct node *prev;
};
void print_it(node* temp); //declaration
int main()
{
    struct node *head, *temp, *newnode;
    int choice;
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
    print_it(temp);
}
void print_it(node *temp) //defination
{
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}