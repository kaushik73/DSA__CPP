#include <bits/stdc++.h>
#define N 5
using namespace std;
int stacck[N];
int top = -1;

void Push()
{
    int x;
    cout << "Enter element to push to stack : ";
    cin >> x;
    if (top == N - 1)
    {
        cout << "Overflow: \n";
    }
    else
    {
        top++;
        stacck[top] = x;
    }
}
void Pop()
{
    int item;
    // top =5;
    item = stacck[top];
    if (top == -1)
    {

        cout << "Underflow \n";
    }
    else
    {
        cout << "Item popped is : " << item << endl;
        top--;
    }
}
void Peek()
{
//Display topmost element :
    if (top == -1)
    {
        cout << "Stack is Empty \n";
    }
    else
    {
        cout << "Top Most Element is : " << stacck[top] << endl;
    }
}
void Display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << stacck[i] << "   ";
    }
}
int main()
{
    int choice = 1;
    cout << "*************************\n";
    cout << "*      1 - Push         *\n";
    cout << "*      2 - Pop          * \n";
    cout << "*      3 - Peek         * \n";
    cout << "*      4 - Display      *\n";
    cout << "************************* \n";
    while (choice == 1)
    {
        int num;
        cout << "Enter Choice : ";
        cin >> num;
        switch (num)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Peek();
            break;
        case 4:
            Display();
            break;
        default:
            cout << "Invalid Choice\n";
        }
        cout << "Press 1 for Continue: ";
        cin >> choice;
    }
}