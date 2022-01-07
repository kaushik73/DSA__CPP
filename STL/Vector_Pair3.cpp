#include <bits/stdc++.h>
using namespace std;

void printvec(vector<pair<int, int>> v) //in this way (&v) reference is passed
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " - " << v[i].second << endl;
    }
    cout << endl;
}

int main()
{
    printf("-------------VECTOR of PAIR--------------");
    vector<pair<int, int>> v = {{1, 3}, {4, 5}};
    vector<pair<int, int>> v2;
    cout << "Vecor v2 - " << v2.size() << endl;
    printvec(v);
    cout << "Enter Size :";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        // v.push_back({x,y});
        v2.push_back(make_pair(x, y));
    }

    printvec(v2);
    cout << "Vecor v2 - " << v2.size() << endl;

    printf("-------------Array of Vector--------------");

    //   int N=3;
    //   cin>>num1;
    vector<int> v3[3]; // 3 is size of an array
    for (int i = 0; i < 3; i++)
    {
        int n3;
        cout << "\nEnter size of each vector : ";
        cin >> n3; //size of each vector
        for (int j = 0; j < n3; j++)
        {
            int x;
            cin >> x;
            // v2[i].push_back(x);
        }
    }

    printf("-------------Vectors of Vector--------------");
    cout << "NAHI AAYA SAMAJ";
}