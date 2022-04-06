#include <bits/stdc++.h>
using namespace std;

class Stack
{ // PROPERTIES :
public:
    int size;
    int *arr; // dynamically creating array
    int top;

    // Constructor
    Stack(int s)
    {
        this->size = s;
        arr = new int[size];
        top = -1;
    }

    // BEHAVIOR :
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "OverFlow\n";
        }
    }

    void pop()
    {
        if (top >= 0)
            top--;
        else
            cout << "UnderFlow\n";
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Underflow\n";
            return -1;
        }
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
    void print1(Stack copy)
    {
        // cout << "\nprint function call" << endl;
        while (!copy.isEmpty())
        {
            cout << copy.peek() << " ";
            copy.pop();
        }
        cout << endl;
    }
    int size1()
    {
        int cnt = 0;
        if (top == -1)
        {
            cout << "\nStack is empty";
            return 0;
        }
        else
        {
            // cout << top;
            while (top > -1)
            {
                cnt++;
                top--;
            }
        }
        return cnt;
    }
};

int main()
{
    Stack st(5);
    st.push(25);
    st.push(24);
    st.push(23);
    st.push(22);
    cout << "1st st  : " << st.peek() << endl;
    st.push(43);
    st.pop();
    cout << "2nd st  : " << st.peek() << endl;
    st.pop();
    cout << "3rd st  : " << st.peek() << endl;

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;
}