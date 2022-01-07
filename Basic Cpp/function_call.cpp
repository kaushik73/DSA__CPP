#include <bits/stdc++.h>
using namespace std;

int add(int x, int y)
{
    int sum = 0;
    sum = x + y;
    cout <<sum<<endl;
    return sum;
}
int sub(int x, int y)
{
    return x - y;
}
void OneTo450(){
    for(int i=1; i<451;i++){
        cout<<"Q "<<i<<" = "<<endl;
    }
}
int main()
{
    // add(3,5);
    // cout<<sub(5,3);


    OneTo450();
}
