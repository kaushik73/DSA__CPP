// https://www.hackerrank.com/challenges/cpp-sets/problem?fbclid=IwAR1Z1fv5RnGAqByvADCRUv4pYQAAmQ_zV5rgVVCagY-DneWu6TSWENdncsY

#include <bits/stdc++.h>
using namespace std;
set<int> bag;
void solution11(int choice, int x)
{
    // int choice;
    auto it = bag.begin();
    if (choice == 1)
    {
        bag.insert(x);
    }
    else if (choice == 2)
    {
        if (bag.find(x) != bag.end())
        {
            bag.erase(x);
        }
    }

    else if (choice == 3)
    {
        auto itt = bag.find(x);
        if (itt != bag.end())
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }

    else
    {

        cout << "Error! The operator is not correct";
    }
}
int main()
{
    int t, num;
    cin >> t;
    while (t--)
    {
        cout << "Enter Number of inputs : ";
        cin >> num;
        for (int i = 0; i < num; i++)
        {
            int x, choice;
            cin >> choice >> x;
            // bag.insert(x);
            solution11(choice, x);
        }
    }
}