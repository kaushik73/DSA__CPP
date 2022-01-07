#include <bits/stdc++.h>
#define N 5
using namespace std;
// int stacck[N];
// int top = -1;
struct node
{
    int data;
    struct node *next;
};
struct node *newnode, *top = NULL, *temp; //0=NULL
int choice;
/*For Push and Pop We will do from begning because if we do this from end the we have to traverse the LL too and that will take O(n) which is not the good approach to push or pop from a stack. */

void Push(int x)
{
    //we not have to check overflow because we are dynamically allocating the memory

    newnode = (struct node *)malloc(sizeof(struct node));
    cout << "Enter data : ";
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void Pop()
{
    temp = top;
    if (top == 0)
    {
        cout << "Empty\n";
    }
    else
    {
        cout << "Popped element is : " << temp->data;
        top = top->next;
        free(temp);
    }
}
void Peek()
{
    if (top == NULL)
    {
        cout << "Empty";
    }
    cout << "Top Element is : " << top->data << endl;
}
void Display()
{
    temp = top;
    if (temp == NULL)
    {
        cout << "Stack is Empty'\n";
    }
    else
    {
        cout << "Stact is \n";
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}
int main()
{
    {
        Push(2);
        Push(3);
        Push(10);
        Display();
        Peek();
        Pop();
        Peek();
        Display();
    }

    return 0;
}