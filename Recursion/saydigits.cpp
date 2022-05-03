#include <bits/stdc++.h>
using namespace std;
// input -> 234 => two three four (output)

void solve(int n, string arr[])
{
    // base case
    if (n == 0)
    {
        return;
   
    }
    int temp = n % 10;
    n = n / 10;
    solve(n, arr);
    cout << arr[temp] << " ";
}
int main()
{
    string arr[10] = {"zero",
                      "one",
                      "two",
                      "three",
                      "four",
                      "five",
                      "six",
                      "seven",
                      "eight",
                      "nine"};
    int n;
    cin >> n;

    solve(n, arr);
}