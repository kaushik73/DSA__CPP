// Compression of strings || Remove Duplicates from String 
// Given a string s, your task is to remove the repeating consecutive characters.
// https://youtu.be/BZ_-FfV1efU
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "HelloMananJain";
    string result;
    int hash[123] = {0}; //So that every character has some place to be located at its ASCII value.
    cout << (int)'a' << (int)'z' << (int)'A' << (int)'Z'; // Some ASCII Values are.
    for (int i = 0; i < str.length(); i++)
    {
        if (hash[str[i]] == 0)
        {
            result += str[i];
            hash[str[i]] = 1;
        }
    }
    cout << "Compressed String is  : " << result << endl;
}
