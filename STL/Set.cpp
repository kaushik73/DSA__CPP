#include <bits/stdc++.h>
using namespace std;
void print1(set<int> s)
{

    for (auto value : s)
    {
        cout << value << endl; //print in sorted order
    }
}    
void print1(multiset<int> s)
{

    for (auto value : s)
    {
        cout << value << endl; //print in sorted order
    }
}
void Ques1()
{
    //   Given N strings . print unique strings in lexiographical order :-
    set<string> st;
    int n;
    cout << "Enter Size of string : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.insert(s);
    }
    for (auto value : st)
    {
        cout << value << "\t";
    }
    cout << endl;
}
void notes()
{
    // For Ordered set, Insert , Find are of O(log n) time complexity
    // For unordered_set, Insert , Find are of O(1) time complexity
    // For multiset, Insert , Find are of O(log n) time complexity

    // for deleting a value -> first s.find(value) then assign it to iterator and then if (it != s.end()) i.e that element is present then call s.erase(it) -------OR----- Simply Call s.erase(value)
    // multiset allows entry of duplicate values
    // for multiset find() function points to 1st value
    // if you delete a value with help of iterator then it will delete 1st value only because find() also points to 1st value only but if you delete a value with help of erase(value) then this will delete all value i.e. delete duplicates too.
    // multiset prints values in order.
}
int main()
{
    set<int> s;
    s.insert(4);
    s.insert(14);
    s.insert(14);
    s.insert(24);
    s.insert(524);
    s.insert(254);
    s.insert(214);
    auto it = s.find(4584); // if value is present return that value else return size of set as it goes upto s.end();
    // so because of this we uses ----
    if (it != s.end()) //this check and then we print the value
    {
        cout << (*it);
    }
    print1(s);
    Ques1();
    multiset<int> s1;
    s1.insert(31);
    s1.insert(3);
    s1.insert(3);
    s1.insert(31);
    s1.insert(122);
    s1.insert(89);
    // print1(s1);
    auto it1 = s.find(3);
    s.erase(it1);
    s.erase(31);
    print1(s);
    // print1(s1);


    set<string>str;
    str.insert("kaushik");
    str.insert("kaik");
    str.insert("kauk");
    str.insert("ushik");
    str.insert("aushik");
    for (auto it = str.begin(); it != str.end();it++){
            cout<<"Printing values : ";
            cout <<*it<<endl;}
}
