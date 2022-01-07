// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE

#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, multiset<string>> marks_map;
    int num;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        int marks;
        string s;
        cin >> s >> marks;
        marks_map[marks].insert(s);
    }
    auto current_it = --marks_map.end();
    while (true)
    {
        auto &students = current_it->second;
        auto &marks = current_it->first;
        for(auto i : students){
            cout<<i << " "<<marks<<endl;
        }
        if (current_it == marks_map.begin())
            break;

        current_it--;
    }
}
