// Greatest number :-
#include <bits/stdc++.h>
int main()
{

    using namespace std;
    int a, b, c;
    cout <<"Enter 3 numbers \n" << endl;
    cin>>a>>b>>c;
        if (a > b && a > c)
    {
        cout << "\nHighest Number is  : " << a;
    }
    else if (b>a && b > c)
    {
        cout << "\nHighest Number is  : " << b;
    }
    else
        cout << "\nHighest Number is  : " << c;
}