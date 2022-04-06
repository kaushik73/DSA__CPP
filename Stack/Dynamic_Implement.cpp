#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int data;
    Stack *next;
    Stack(int d)
    {
        this->data = d;
        this->next = NULL;
    }
} *top = NULL;
void linkedListTraversal(Stack *ptr)
{
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout<<endl;
}
bool isempty(Stack *top)
{
    if (top == NULL)
        return true;
    return false;
}
bool isfull()
{
    Stack *new1 = new Stack(55);
    if (new1 == NULL)
        return true;
    return false;
}
void push(Stack *top, int element)
{
    if (isfull())
    {
        cout << "OverFlow\n";
    }
    else
    {
        Stack *s1 = new Stack(element);
        s1->next = top;
        top = s1;
    }
}

int pop(Stack *top)
{
    int x;
    if (isempty(top))
    {
        cout << "UnderFlow\n";
    }
    else
    {
        Stack *deleted = top;
        x = deleted->data;
        free(deleted);
        top = top->next;
    }
    return x;
}
int main()
{
    push(top, 45);
    cout << "deleted element is : " << pop(top) << endl;
    linkedListTraversal(top);
    push(top, 46);
    cout << "deleted element is : " << pop(top) << endl;
    push(top, 47);
    cout << "deleted element is : " << pop(top) << endl;
    push(top, 48);
}