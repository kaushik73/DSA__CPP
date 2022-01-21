#include <bits/stdc++.h>
using namespace std;
void print1(map<int, string> &m)
{
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
}
void print2(map<int, string> &m)
{
    cout << "\nPrint Using Iterator\n";
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
        //cout << (*it).first << " " << (*it).second << endl;
    }
}

int main()
{

    map<int, string> m; //ordered map
    // unordered_map<int, string> m; //ordered map
    m[26] = " Kaushik";
    m.insert({2, "manan"});
    m.insert(make_pair(23, "Doctor"));
    print1(m);
    print2(m);

    cout << "\n116 is Found : " << m.count(116); // returns T/F

    auto it2 = m.find(26); //return iterator.

    if (it2 == m.end())
    {
        cout << "\nnot finded";
    }
    else
    {
        cout << endl
             << it2->first << " " << it2->second << endl;
    }
    //ERASE(); delete the key-value from the map.
    m.erase(it2); //iterator pointing to 26
    m.erase(26);  // giving value of key
    print2(m);

    //Question  on Map :
    // count frequency of each input string
    map<string, int> m3;
    cout<<"\nEnter 8 strings\n";
    for (int i = 0; i < 8; i++)
    {
        string s;
        cin >> s;
        m3[s]++;
    }
    for (auto pr : m3)
    {

        cout << pr.first << " " << pr.second << endl;
    }
}