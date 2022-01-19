// Case Converter
// Greatest number finder
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // --------------------------------1--------------------------------------
    // A -> 65 and Z -> 90
    string s1 = "KaUshIk";

    for (int i = 0; i < s1.size(); i++)
    {
        if ((int)s1[i] >= 'A' && (int)s1[i] <= 'Z') //it is lower case
        // if ((int)s1[i] >= 65 && (int)s1[i] <= 90) //it is lower case
        {
            s1[i] += 32;
        }
        else
        {
            s1[i] -= 32;
        }
    }
    cout << "Converted value of s1 is : " << s1 << endl;
    cout << "Kaushik in Math Language : " << endl;

    for (auto value : s1)
    {
        cout << (int)value << " ";
    }
    // --------------------------------2--------------------------------------

    string s2 = "6902747560597273";
    //make greatest number from s2 string :
    // by default sort function do lowest to highest.
    sort(s2.begin(), s2.end(), greater<int>());
    cout << "Greatest number from s2 is : " << s2 << endl;
}