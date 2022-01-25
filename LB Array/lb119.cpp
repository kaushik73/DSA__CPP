#include <bits/stdc++.h>
using namespace std;
void solve(int arr[], int n, int power)
{
    int kill = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= power)
        {
            kill++;
            sum = sum + arr[i];
        }
    }
    cout << kill << " " << sum;
}
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int power;
        cin >> power;
        solve(arr, n, power);
        cout << endl;
    }
}
