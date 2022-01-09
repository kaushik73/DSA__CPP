// { Driver Code Starts
#include <iostream>
#include <string.h>
using namespace std;
int PalinArray(int a[], int n);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        cout << PalinArray(a, n) << endl;
    }
}
int PalinArray(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int temp = a[i];
        int digit;
        int rev = 0;
        while (temp > 0)
        {
            digit = temp % 10;
            rev = (rev * 10) + digit;
            temp = temp / 10;
        }
        if (rev != a[i])
            return 0;
    }
    return 1;
}
