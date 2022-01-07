// Enter Number : 5
//     *
//    ***
//   *****
//  *******
// *********
// *********
//  *******
//   *****
//    ***
//     *
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter Number : ";
    int i, j, k, n;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        k = i;
        for (; j <= n; j++)
        {

            cout <<"*";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout <<"*";
        }

        cout << endl;
    }  for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        k = i;
        for (; j <= n; j++)
        {

            cout <<"*";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout <<"*";
        }

        cout << endl;
    }

}