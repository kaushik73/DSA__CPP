#include <bits/stdc++.h>
#define N 7
using namespace std;

void BalanceBraket()
{

    string s = "(()()()()()() )()())";
    int len = s.length();
    int l = s.size();
    cout << "Length len  is : " << len << endl;
    cout << "Length l is : " << l << endl;
    int count = 0;
    cout << s.at(1) << endl;
    // cout<<typeof();
    cout << typeid(s.at(1)).name() << endl;
    cout << typeid(')').name() << endl;

    for (int i = 0; i < l; i++)
    {
        // if (s.contains('('))
        if (s.at(i) == ')')
        {
            cout << count << endl;
            count++;
        }
        else
        {
            count--;
            cout << count << endl;
        }
    }
    // cout<<count<<endl;
    if (count == 0)
    {
        cout << "Balance Bracket";
    }
    else
    {
        cout << "UnBalance Bracket";
    }
}

string BalanceBracketReal(string s)
{
    unordered_map<char, int> symbol = {
        {{'['}, -1}, {{'('}, -2}, {{'{'}, -3}, {{']'}, -1}, {{')'}, -2}, {{'}'}, -3}};
    stack<char> st;
    for (char i : s)
    {
        if (symbol[i] < 0)
        {
            st.push(i);
        }
        else
        {
            if (st.empty())
                return "NO";
            char top = st.top();
            st.pop();
            if (symbol[top] + symbol[i] != 0)
                return "No";
        }
    }
    if (st.empty())
        return "Yes";
    return "NO";
}

int main()
{
    // BalanceBraket();
    BalanceBracketReal("({[]})");
}
