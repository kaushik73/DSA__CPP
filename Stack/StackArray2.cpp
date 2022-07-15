#include <bits/stdc++.h>
// #include <iostream> // remove the quotes "iostream"
using namespace std;

class Stack
{
public:
    int size;
    int *arr;
    int top;

    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[size];
    }

    void push1(int d)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = d;
        }
        else
        {
            cout << "OverFlow \n";
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "UnderFlow\n";
        }

        else
        {
            // cout << arr[top];
            top--;
        }
        cout << endl;
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "UnderFlow No peek\n";
        }

        else
        {
            cout << arr[top];
        }
        cout << endl;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int Size()
    {
        int cnt = 0;
        int temp = arr[0];
        if (top == -1)
        {
            // cout << "Stack is khali \n";
            return 0;
        }

        else
        {
            while (top > -1)
            {
                cnt++;
                top--;
            }
        }
        return cnt;
    }

    void print1(Stack copy)
    {
        // cout << "\nprint function call" << endl;
        while (!copy.isEmpty())
        {
            copy.peek();
            copy.pop();
        }
        cout << endl;
    }
};

int main()
{
    Stack st(5);
    cout << "empty ? : " << st.isEmpty() << endl;
    st.peek();
    cout << "size : " << st.Size() << endl;
    st.push1(25);
    st.push1(24);
    st.push1(23);
    st.push1(22);
    st.peek();
    st.push1(43);
    st.peek();
    st.pop();
    st.pop();
    st.peek();
    st.pop();
    st.peek();
    cout << endl;
    st.push1(29);
    cout << "=-------\n";
    st.print1(st);
    cout << "empty ? : " << st.isEmpty() << endl;
    cout << "size : " << st.Size() << endl;
}