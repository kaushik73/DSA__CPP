#include <bits/stdc++.h>
using namespace std;

int frequency_method(int num[], int n)
{
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == true){
            continue;}
        int cnt = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                visited[j] = true;
                cnt++;
            }
        }
        cout << num[i] << " " << cnt << endl;
    }
}
int main()
{
    int arr[] = {2, 4, 5, 3, 2, 4, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    frequency_method(arr, n);
}
