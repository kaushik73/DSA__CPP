#include <bits/stdc++.h>
using namespace std;

struct node
{
    float data;
    struct node *prev;
    struct node *next;
} *head = NULL, *newnode, *tail;

int choice = 1;
void create()
{
    while (choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        cout << "Enter Data : ";
        cin >> newnode->data;
        newnode->next = NULL;
        newnode->prev = NULL;
        if (head == NULL)
        {
            head = tail = newnode;
            head->next = head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head; // update for making circular
            head->prev = newnode; // update for making circular
            tail = newnode;       // pointing to last node
        }
        cin >> choice;
    }
}
void print_LL()
{
    struct node *temp = head;
    while (temp != tail)
    {
        // we can also write b
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data;
}

void InsertAtBeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter Data : ";
    cin >> newnode->data;
    if (head == NULL)
    {
        head = tail = newnode;
        newnode->next = head;
        newnode->prev = tail;
    }
    else
    {
        newnode->next = head;
        newnode->prev = tail;
        tail->next = newnode;
        head->prev = newnode;
        head = newnode;
    }
}
void InsertAtEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter Data : ";
    cin >> newnode->data;
    newnode->prev = tail;
    newnode->next = head;
    tail->next = newnode;
    head->prev = newnode;
    tail = newnode;
}
void insert_at_pos(int pos)
{
    struct node *temp = head;
    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter Data : ";
    cin >> newnode->data;
    for (int i = 2; i < pos; i++)
    {
        temp = temp->next;
    }
    temp->next->prev = newnode;
    newnode->next = temp->next;
    newnode->prev = temp;
    temp->next = newnode;
}
void delete_Beg()
{
    struct node *temp = head;
    head = head->next;
    head->prev = tail;
    tail->next = head;
    free(temp);
}
void delete_End()
{
    head->prev = tail->prev;
    tail->prev->next = head;
    struct node *temp = tail;
    tail = tail->prev;
    free(temp);
}
void delete_Any_Pos(int pos)
{
    struct node *current = head, *prev = NULL, *nxt;
    for (int i = 1; i < pos; i++)
    {
        prev = current;
        current = current->next;
        nxt = current->next;
    }
    prev->next = nxt;
    nxt->prev = prev;
}
int main()
{
    // cout << sizeof(struct node) << endl<< endl;
    int pos;
    create();
    cout << endl;
    print_LL();
    /*
    cout << "\nInsert at beginning\n";
    InsertAtBeg();
    print_LL();
    cout << "\nInsert at end\n";
    InsertAtEnd();
    print_LL();
    cout << "\nEnter pos : ";
    cin >> pos;
    insert_at_pos(pos);
    print_LL();
*/

    cout << endl;
    delete_Beg();
    print_LL();

    cout << endl;
    delete_End();
    print_LL();

    cout << "\nEnter pos : ";
    cin >> pos;
    cout << endl;

    delete_Any_Pos(pos);
    print_LL();

    return 0;
}