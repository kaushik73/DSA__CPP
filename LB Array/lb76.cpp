// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countRev(string s);
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        cout << countRev1(s) << '\n';
    }
}
//Code by MYSELF : 
int countRev(string s)
{
    cout << 1 / 2 << endl;
    int temp, op = 0, cl = 0;
    // code for ope brackets :
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{')
        {
            op++;
        }
        else
        {
            cl++;
        }
    }
    //open greater than close
    // cout << op << ' ' << cl << endl;
    if (op > cl)
    {
        temp = op - cl;
        // cout << temp;
        if (temp % 2 == 0)
        {
            return (temp / 2);
        }
        else
        {
            return -1;
        }
    }
    // close grater than open
    else if (cl > op)
    {
        cout << "Not Done Yet";
    }
    else
    {
        return 0;
    }
}
//Code After Youtube Video :
int countRev1(string s)
{

}