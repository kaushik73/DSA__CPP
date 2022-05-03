#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    if (n == 1)
        return ans;
    ans = n * factorial(n - 1);
}

int powerof2(int n)
{ int ans=1;
    if(n==1){
        return ans*2;
    }
    ans = 2*powerof2(n-1);
}
int main()
{
    int n;
    cin >> n;

    cout << factorial(n)<<endl;

    cout << powerof2(n);
}