#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next; 
};
struct Node *head = NULL;
struct Node *tail = head;
struct Node *temp = head;
int count = 0, temp1 = 0;
void insert(int ndata)
{
    struct Node *newnode, *temp;
    int choice;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    // cout << "Enter Data : ";
    newnode->data = ndata;
    newnode->prev = NULL;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = temp = tail = newnode;
    }
    else
    {
        temp->next = newnode;
        newnode->prev = temp;
        temp = tail = newnode;
        // cout << "head" << head->data << endl;
    }
}

void beg()
{
    struct Node *temp = head;
    head = temp->next;
}

void end()
{

    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    tail->prev->next = NULL;
}

void anyPos(int position)
{
    cout << "\n Any position program \n";
    struct Node *temp = head;
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }
    if (position == 1)
    {
        beg();
    }
    else if (temp->next == 0)
    {
        tail = tail->prev;
        tail->next = 0;
        free(temp);
    }
    else
    {
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
    }
}

void display()
{
    cout << "\nYour LL is : ";
    struct Node *traverse;
    traverse = head;
    cout<<head->data;
    while (traverse != NULL)
    {
        cout << traverse->data << " ";
        traverse = traverse->next;
    }
}
int len()
{
    temp = head;
    int counter = 0;

    while (temp != NULL)
    {
        counter += 1;
        temp = temp->next;
    }
    return counter;
}
// Reverse is not working :-  
void Reverse()
{
     struct Node *nextnode;  
     struct Node *current;
     while (current !=  NULL)
     {
       nextnode = current->next;
       current->next = current->prev;
       current->prev = nextnode;              
       current = current->next;
     }
     current = head;
     head = tail;
     tail = current;
}
int main()
{
    insert(5);
    insert(6);
    insert(7);
    insert(8);

    display();
    cout << "\n1 : Delete Element from begning :- " << endl;
    cout << "2 : Delete Element from End :- " << endl;
    cout << "3 : Delete Element from Any position :- " << endl;
    cout << "4 : Count Number of Elements :- " << endl;
    cout << "5 : Reverse Elements of LL :- " << endl;
    int choice;
    cout << "Enter choice : ";
    cin >> choice;
    switch (choice)
    {
    case 1:
        beg();
        break;
    case 2:
        end();
        break;
    case 3:
        int position;
        cout << "Enter position : ";
        cin >> position;
        anyPos(position);
        break;
    case 4:
        len();
        break;
    case 5:
    cout<<"Case 5 Executing....";
        Reverse();
        break;
    default:
        cout << "\nWrong Choice";
        break;
    }
    // cout<<"\nEnd of Choice \n";
    display();
    cout << "\nNow Size of Your LL is : " << len();
    return 0;
}
