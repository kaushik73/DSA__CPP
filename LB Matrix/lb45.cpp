#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int matSearch1(vector<vector<int>> &mat, int N, int M, int X) // another approach
    {
        int row = 0;
        for (int i = 0; i < N; i++)
        {
            if (mat[i][0] == X)
            {
                return 1;
            }
            else if (mat[i][0] > X)
            {
                row = i - 1;
                break;
            }
            else
            {
                row = i;
            }
        }
        if (row > 0)
        {
            for (int j = 0; j < M; j++)
            {
                if (mat[row][j] == X)
                {
                    return 1;
                }
            }
            return 0;
        }
    }
    int matSearch(vector<vector<int>> &arr, int n, int m, int x) // optimal approach O(n+m)
    {
        int r = 0, c = m - 1;
        while (r < n & c >= 0) 
        {
            if (arr[r][c] == x)
                return 1;
            if (arr[r][c] > x)
                c--;
            else
                r++;
        }
        return 0;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> arr[i][j];

        int x;
        cin >> x;
        Solution ob;
        cout << ob.matSearch(arr, n, m, x) << endl;
    }
} 