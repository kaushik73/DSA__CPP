#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = arr[0];
    int maxi = ans;
    int mini = ans;

    int choice1, choice2;

    for (int i = 1; i < n; i++)
    {
        choice1 = maxi * arr[i];
        choice2 = mini * arr[i];
        maxi = max(arr[i], max(choice1, choice2)); //because max*negative becomes min
        mini = min(arr[i], min(choice1, choice2)); //because min*negative becomes max
        ans = max(ans, maxi);
    }
    cout << ans;
}