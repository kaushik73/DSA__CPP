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
void printvec2(vector<vector<int>> v) //in this way (&v) reference is passed
{
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    // printf("-------------VECTOR of PAIR--------------");
    // vector<pair<int, int>> v = {{1, 3}, {4, 5}};
    // vector<pair<int, int>> v2;
    // cout << "Vecor v2 - " << v2.size() << endl;
    // printvec(v);
    // cout << "Enter Size :";
    // int n;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     int x, y;
    //     cin >> x >> y;
    //     // v.push_back({x,y});
    //     v2.push_back(make_pair(x, y));
    // }

    // printvec(v2);
    // cout << "Vecor v2 - " << v2.size() << endl;

    // printf("-------------Array of Vector--------------");

    // //   int N=3;
    // //   cin>>num1;
    // vector<int> v3[3]; // 3 is size of an array
    // for (int i = 0; i < 3; i++)
    // {
    //     int n3;
    //     cout << "\nEnter size of each vector : ";
    //     cin >> n3; //size of each vector
    //     for (int j = 0; j < n3; j++)
    //     {
    //         int x;
    //         cin >> x;
    //         // v2[i].push_back(x);
    //     }
    // }

    // printf("-------------Vectors of Vector--------------");
    // vector<vector<int>> v4;
    // for (int i = 0; i < 3; i++)
    // {
    //     int n4;
    //     vector<int> temp;
    //     cout << "\nEnter size of each vector : ";
    //     cin >> n4; //size of each vector
    //     cout << "Enter " << n4 << " elements : " << endl;
    //     for (int j = 0; j < n4; j++)
    //     {
    //         cout << "Enter Element at " << i << " " << j << " : ";
    //         int x;
    //         cin >> x;
    //         temp.push_back(x);
    //     }
    //     v4.push_back(temp);
    // }
    // printvec2(v4);

    int Nx = 3;
    int Mat[3][3];
    for (int i = 0; i < Nx; i++)
    {
        for (int j = 0; j < Nx; j++)
        {
            cin >> Mat[i][j];
        }
    }
    vector<int> result;
    for (int i = 0; i < Nx; i++)
    {
        for (int j = 0; j < Nx; j++)
        {
            result.push_back(Mat[i][j]);
        }
    }

    sort(result.begin(), result.end());

    for (int i = 0; i < Nx; i++)
    {
        for (int j = 0; j < Nx; j++)
        {
          Mat[i][j] = result[i];
        }
    }
  
}