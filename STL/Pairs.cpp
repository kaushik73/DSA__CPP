#include <bits/stdc++.h>
#define N 7
using namespace std;

void print2(pair<int, int> p_array[])
{
    for (int i = 0; i < 3; i++)
    {
        cout << p_array[i].first << "  -  " << p_array[i].second << endl;
    }
}
int main()
{
    pair<int, string> p; //making of a pair
    pair<int, string> q;
    p = make_pair(2, "kaushik"); //assigning values-1
    p = make_pair(3, "jain");    //assigning values-1
    q = {3, "Jain"};             //assigning values-2
    pair<int, string> &p1 = p;   //refernce passing

    cout << p.first << " " << p.second << endl;
    cout << q.first << " " << q.second << endl;
    cout << p1.first << " " << p1.second << endl;
    //there is no function as -> .size() and for each loop also not works in pair.
    //a is realted to b :-
    int a[3] = {1, 2, 3};
    int b[3] = {3, 4, 5};
    pair<int, int> p3[3] = {{1, 2}, {2, 4}, {3, 5}};
    pair<int, int> p_array[3];
    p_array[0] = {1, 3};
    p_array[1] = {2, 4};
    p_array[2] = {3, 5};

    print2(p_array);
    swap(p_array[0], p_array[2]); //both array swap at a time ;
    cout << "\nAfter swapping : \n";
    print2(p_array);
    // pairs are used to maintain a relation between 2 array

    // Pairs can be compared with each other firstly they are compared on basis of their 1st value(3 and 6 are compared) and if 1st value is same 2nd value(4 and 7) is compared
    pair<int, int> c1 = {3, 4};
    pair<int, int> c2 = {6, 7};
    cout << (c1 > c2); //this is false statement so returns false.
}