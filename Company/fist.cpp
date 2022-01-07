#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
    int n = 9;
    for (int i = 9; i >=0; i--)
    {
        for (int j = 9; j > i; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}