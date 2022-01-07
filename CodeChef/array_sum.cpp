#include <iostream>
using namespace std;

int main()
{
    int n;
    long sum = 0;

    cin >> n;
    long arr[10];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    cout<<"sum is : ";
    cout << sum;
    return 0;
}