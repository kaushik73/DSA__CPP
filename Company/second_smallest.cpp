#include <bits/stdc++.h>
int main()

{
    using namespace std;
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<endl<<n<<endl;
    int first, second;
    first = second = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    cout << "first=" << first << "     second=" << second << endl;
}