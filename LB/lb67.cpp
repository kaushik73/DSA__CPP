// Split the binary string into substrings with equal number of 0s and 1s
// Given a binary string str of length N, the task is to find the maximum count of consecutive substrings str can be divided into such that all the substrings are balanced i.e. they have equal number of 0s and 1s. If it is not possible to split str satisfying the conditions then print -1.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str; //str = “0100110101”
    cin >> str;
    int len = str.length(), cnt = 0, c0 = 0, c1 = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '0')
        {
            c0++;
        }
        else
        {
            c1++;
        }
        if (c1 == c0)
        {
            cnt++;
        }
    }
    if (c0 != c1) // if 1's and 0's are not equal
    {
        cout << "-1";
    }
    else
        cout << cnt << endl;
}