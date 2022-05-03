#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void reverseIt(string &s, int end, int start)
{
    string ans;
    // Base Case
    if (start > end)
    {
        return;
    }
    // R.R
    swap(s[start], s[end]);
    reverseIt(s, end - 1, start + 1);
}
void reverseIt_SinglePointer(string &str, int e)
{
     static int i = 0;
    if(i>=e/2) {
        return;
    }
    swap(str[i],str[e-i-1]);
    i++;
    reverseIt_SinglePointer(str,e);
    i = 0;
}
int main()
{

    string s = "kaushik";
    string s1 = "kaushik";
    cout << s << endl;
    // cout << s;

    reverseIt(s, s.size() - 1, 0);
    cout << s << endl;
    reverseIt_SinglePointer(s1, s.size());
    cout << "Now : " << s << endl;
}