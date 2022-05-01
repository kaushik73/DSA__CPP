#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

vector<int> result2;
void print1(int arr[][2])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}
int Largestrowsum(int arr[][2])
{ int lrs=INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 2; j++)
        {
            sum += arr[i][j];
        }
        lrs = max(lrs, sum);
    }
    return lrs;
}
void colsum(int arr[][2])
{
    for (int j = 0; j < 2; j++)
    {
        int sum = 0;
        for (int i = 0; i < 3; i++)
        {
            sum += arr[i][j];
        }
        result2.push_back(sum);
    }
    cout<<endl;
}
int main()
{
    int arr[3][2] = {1, 2, 3, 4, 5, 6};        // giving input
    int arr1[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // giving input
    print1(arr);
    print1(arr1);
    int lrs = Largestrowsum(arr1);
    cout<<"Largest Row Sum : "<<lrs<<endl;
    
    colsum(arr1);
    cout<<"Column Sum : "<<endl;
    for(int i = 0; i < result2.size(); i++)
    cout << result2[i] << ' ';
}