#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2, res;
    cin >> s1 >> s2;
    cout << "Enter resultant string :  ";
    cin >> res;
    int l1 = s1.length();
    int l2 = s2.length();
    int lr = res.length();
    int f = 0, i = 0, j = 0, k = 0;
    cout << l1 << " " << l2 << " " << lr;

    if (l1 + l2 != lr)
        cout << "No";
    else
    {
        while (k < lr)
        {
            if ((i < l1) and (s1[i] == res[k]))
                i++;
            else if (j < l2 and s2[j] == res[k])
                j++;
            else
            {
                f = 1;
                break;
            }
        k++;
        }
    }
    if (i < l1 or j < l2)
        cout << "Nope Value of f : " << f;
    else
    {
        cout << "YUP";
    }
}