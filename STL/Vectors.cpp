#include <bits/stdc++.h>
using namespace std;

void printvec(vector<int> v) //in this way (&v) reference is passed
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
void printvec2(vector<string> v) //in this way (&v) reference is passed
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> v(5, 3); //initial size 5 and all are assign with valu e 3
    v.push_back(12);     //size increaed to 6
    v.push_back(24);
    v.push_back(36);
    printvec(v);
    cout << "Size of V is : "<<v.size() << endl;
    vector<int> v2 = v;
    vector<int> v3(v);
    printvec(v2);
    printvec(v3);

    cout << "\n working with string\n"; vector<string> s;
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        string s1;
        cout << "\nEnter String No. " << i + 1 << " : ";
        cin >> s1;
        s.push_back(s1);
    }
    printvec2(s);
}