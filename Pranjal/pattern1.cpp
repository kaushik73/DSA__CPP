// Enter Number : 6
//       1
//     2 1 2
//    3 2 1 2 3
//   4 3 2 1 2 3 4
//  5 4 3 2 1 2 3 4 5
// 6 5 4 3 2 1 2 3 4 5 6

// logic :------------
// i=row number and j = column number
// for spaces -> j=1 to n-i;
// for(4,3,2,1) -> k=i and j upto n (k--)
// for(2,3,4) -> k=2,j uto n+i-1 (k++)
// To learn -> n-1 then n then n+i-1
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

            cout << k-- << " ";
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k++ << " ";
        }

        cout << endl;
    }
}