#include <bits/stdc++.h>
#define N 5
int s1[N], s2[N];
int top1 = -1, top2 = -1;

int countt = 0; 

using namespace std;

void push1(int data)
{
    if (top1 == N - 1)
    {
        // cout << "top1 is : " << top1 << endl;
        // cout << "N is : " << N << endl;
        cout << "OverFlow push1 code\n";
    }
    else
    {
        cout << "\tpush1 is called\n";
        top1++;
        s1[top1] = data;
    }
}

// int pop1()
// {
//     return s1[top1];
//     top1--;
// }

int pop1()
{
    if (top1 == -1)
    {
        printf("\nStack is empty..");
    }
    else
    {
        int a = s1[top1];
        top1--;
        return a;
    }
}

int pop2()
{
    int element = s2[top2];
    top2--;
    return element;
}

// int pop2()
// {
//     return s2[top2];
//     top2--;
// }

void push2(int data)
{
    if (top2 == N - 1)
    {
        cout << "OverFlow push2 code\n";
    }
    else
    {
        top2++;
        s2[top2] = data;
    }
}
void enqueue(int x)
{
    cout << "\tEnqueue function called\n";
    push1(x);
    countt++;
}

void dequeue()
{
    cout << "\tDequeue function called\n";
    int temp1;
    //pop from stack1 and push to stack2
    if ((top1 == -1) && (top2 == -1))
    {
        cout << "Queue is Empty\n";
    }
    else
    {
        for (int i = 0; i < countt; i++)
        {
            temp1 = pop1();
            push2(temp1);
        }
        pop2(); //dequed element
        countt--;
        for (int i = 0; i < countt; i++)
        {
            temp1= pop2();
            push1(temp1);
        }
    }
}

void display()
{
    cout << "Display : ";
    for (int i = 0; i <= top1; i++)
    {
        cout << s1[i] << " ";
    }
}

int main()
{
    enqueue(5);
    enqueue(2);
    enqueue(-1);
    enqueue(-6);
    dequeue();
    display();
}