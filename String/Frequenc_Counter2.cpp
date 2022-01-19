#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str[100];
    int i;
    int freq[256] = {0}; //initialize all elements with Zero;
    cout << "Enter a string\n";
    cin >> (str);
    i = 0;
    while (str[i] != '\0')
    {
        freq[str[i]]++;
        i++;
    }
    i = 0;
    while (i < 256)
    {
        if (freq[i] != 0)
        {
            cout << "Character " << (char)i << " occurs " << freq[i] << " time in the string\n";
        }
        i++;
    }
    cout << "----------------------------------------\n";
    string s;
    cin >> s;
    map<int, int> k;
    for (auto it : s)
    {
        k[s[it]]++;
    }
}