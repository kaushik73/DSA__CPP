// cout << 5 + "0123456789"; -> 56789
#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
using namespace std;

int main()
{
    int cnt = 0;
    string s1 = "kaushik";
    for (int i = 0; s1[i] != '\0'; i++)
    {
        cnt++;
    }
    cout << "length is " << cnt;
    cout << "\nBefore a char push_back " << s1 << endl;
    s1.push_back('j');
    cout << "\nAfter a char push_back " << s1 << endl;
    cout << s1 << endl;

    char a1[] = "no\0no";
    string a2 = "no\0no";
    cout << a1 << " " << a2 << endl;
    cout << "-----------------------------------------------\n";
    string str4;
    // getline(cin, str4, '&');
    cout << "Enter a String : ";
    getline(cin, str4);
    cout << " str4 : " << str4 << endl;

    char leftStr[] = "g f g";
    char rightStr[] = "g f g";

    if (strcmp(leftStr, rightStr) == 0)
        printf("Strings are equal");
    else
        printf("Strings are unequal");

    string s11 = "kaushik", s2 = "kaushik";
    if (s11.compare(s2) == 0)
    {
        cout << " \nEqual!";
    }
    else
        cout << "\nNot Equal";

    cout << s11.substr(0, 4); // 4th index not included i.e. -> [0,4)

    const char *c = "Word";
    string str = "WhereIsMyWordThatINeedWord";
    cout << "\nthe word is at index " << str.find(c);
}