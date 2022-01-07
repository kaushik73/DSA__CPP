#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6};
    vector<int>::iterator it = a.begin();
    cout << (*(it + 3)) << endl;


    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    //above loop can also be written as :-
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << (*it) << " ";
    }

    cout << endl
         << endl;
    vector<pair<int, int>> v_p = {{1, 2}, {3, 4}, {5, 6}};
    vector<pair<int, int>>::iterator it1;

    for (int value : a)
    { // In this loop copy of vectors are comming.
        cout << value << " ";
    }
    cout << endl;
    for (int &value : a)
    { // In this loop original values  of vectors are comming.
        cout << value << " ";
    }
    cout << endl;
    for (pair<int, int> &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    //above loop can also be written as :-

    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }

}