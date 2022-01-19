#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "aacbcbaazaqotprldqpe";
    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (freq[s[i] - 'a'] != 0)
        {
            cout << s[i] << freq[s[i] - 'a'] << endl;
            freq[s[i] - 'a'] = 0;
        }
    }
    cout<<"---------------------------\n";
    string s1(s); // s is copied to s1
    int freq2[127] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        freq2[s1[i]]++;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (freq2[s1[i]] != 0)
        {
            cout << s1[i] << freq2[s[i]] << endl;
            freq2[s1[i]] = 0;
        }
    }
}