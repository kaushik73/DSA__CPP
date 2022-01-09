#include <iostream>
#include <stdio.h>
using namespace std;
 
int main()
{   int r1,r2,c1,c2;
    int arr[15][15];
    int arr2[15][15];
    int result [15][15];

     cout << "Enter rows and columns for first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns for second matrix: ";
    cin >> r2 >> c2;

    cout<<"Enter elements of 1st array "<<endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
           cin>>arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Enter elements of 2nd array "<<endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
           cin>>arr2[i][j];
        }
        cout<<endl;
    }
        cout<<"\nMultiplication of these two array are  "<<endl;

  for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            result[i][j]=0;
        }}
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for(int k = 0; k < c1; ++k)
            {
            result[i][j]+=arr[i][k]*arr2[k][j];
            }
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
         cout<<result[i][j]<<" ";
        }cout<<"\n";
        // cout<<"\n";
    }

   
}