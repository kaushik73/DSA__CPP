#include <bits/stdc++.h>
using namespace std;

int gcd1(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter 2 numbers : " << endl;
    cin >> a >> b;
    int ans = gcd1(a, b);
    cout << "GCD or HCF of " << a << " and " << b << " is : " << ans << endl;
}