// Enter Number of stars : 9
//   *   *  
//  * * * * 
// *   *   *

#include <bits/stdc++.h>
using namespace std;
int main()
{

    cout << "Enter Number of stars : ";
    int i, j, k, n;
    cin >> n;
    for (i = 1; i <=3; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (((i + j) % 4) == 0 || (i == 2 && (j % 4 == 0)))
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}