#include <bits/stdc++.h>
int main()
{
    using namespace std;
    int arr[] = {64, 25, 12, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[min], arr[i]);

        // if (min != i)
        // {
        //     swap(arr[min], arr[i]);
        // }
    }
    for (int i = 0; i < n; i++)
    {
        cout <<"\n"<< arr[i] << " ";
    }
}
