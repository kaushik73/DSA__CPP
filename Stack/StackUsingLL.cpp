// #include <bits/stdc++.h>
// // #define N 5
// using namespace std;
// class Stack
// {
// public:
// Stack *top = NULL;
//     int data;
//     Stack *next;
//     Stack(int element)
//     {
//         this->data = element;
//         next = NULL;
//         // top = NULL; // head ptr
//     }
// };

// bool isfull()
// {
//     Stack *temp = new Stack(12);
//     if (temp == NULL)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// bool isempty(Stack *top)
// {
//     if (top == NULL)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// void push(int element)
// {
//     if (isfull()) // empty stack
//     {
//         cout << "OverFlow";
//     }
//     else
//     {
//         Stack *newnode = new Stack(element);
//         newnode->next = top;
//         top = newnode;
//     }
// }
// void pop()
// {
//     if (!isempty(top))
//     {
//         top = top->next;
//     }
//     else
//     {
//         cout << "UnderFlow\n";
//     }
// }

// int peek()
// {
//     if (!isempty(top))
//     {
//         return top->data;
//     }
//     else
//     {
//         cout << "No element is present in stack\n";
//     }
// }
// int main()
// {
//     push(3);
//     push(4);
//     push(5);
//     push(6);
//     cout << "top element is : " << peek();
//     pop();
//     cout << "top element is : " << peek();
// }