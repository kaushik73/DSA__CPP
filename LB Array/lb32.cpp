// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset1(int a1[], int a2[], int n, int m);
string isSubset2(int a1[], int a2[], int n, int m);

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int *a1 = new int[n];
        int *a2 = new int[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> a2[i];
        }

        cout << isSubset2(a1, a2, n, m) << endl;
    }
    return 0;
}

string isSubset1(int a1[], int a2[], int n, int m)
{
    //     a1[i] = {11, 1, 13, 21, 3, 7}
    //     a2[j] = {11, 3, 7, 1}
    int cnt = 0;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            if (a2[j] != a1[i])
            {
                continue;
            }
            else
            {
                cnt++;
            }
        }
    }
    if (cnt == m)
    {
        return "Yes";
    }
    return "No";
}
string isSubset2(int a1[], int a2[], int n, int m)
{
    int cnt = 0;
    //     a1[i] = {11, 1, 13, 21, 3, 7}
    //     a2[j] = {11, 3, 7, 1}
    sort(a1, a1 + n);
    sort(a2, a2 + m);
    for (int i = 0; i < m; i++)
    {
        if (binary_search(a1, a1 + n, a2[i]))
        {
            continue;
        }
        cnt = 1;
    }
    if (cnt == 1)
    {
        return "No";
    }
    return "Yes";
}



