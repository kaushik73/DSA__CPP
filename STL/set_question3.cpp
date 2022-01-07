// https://www.hackerearth.com/problem/algorithm/monks-birthday-party/?fbclid=IwAR3COuGp9LqoHKWOnfS-duVdKrF0Vx5shbCbGeiWqSgkdoA2z9926vNy5Ew
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, n;
    cin>>t;
    while (t--)
    {
        set<string> bag;
        // cout<<"Enter n : ";
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            string s;
            // cout<<"\nEnter S: ";
            cin >> s;
            bag.insert(s);
        }
        // cout<<"\nSize is : "<<bag.size();
        for (auto it = bag.begin(); it != bag.end();it++){
            // cout<<"Printing values : ";
            cout <<*it<<endl;}
    }
}
// Write your code here
