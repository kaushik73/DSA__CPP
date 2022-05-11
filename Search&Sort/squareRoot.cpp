#include <iostream>
using namespace std;

long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    int ans = -1;
    int mid = (s + e) / 2;
    while (s <= e)
    {
        int square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double sol = tempSol;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        for (double j = sol; j * j < n; j = j + factor)
        {
            sol = j;
        }
    }
    return sol;
}

int main()
{
    int n;
    cout << " Enter the number " << endl;
    cin >> n;

    int tempSol = sqrtInteger(n);
    cout << " Answer is " << morePrecision(n, 3, tempSol) << endl;
    return 0;
}