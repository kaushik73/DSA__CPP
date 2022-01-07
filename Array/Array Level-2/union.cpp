#include <stdio.h>
#include <string>
#include <iostream>
#include <set>

using namespace std;

int main()
{
set<int>s;

int arr1[]={1,2,3,4,5,6,7,9,9}; 
int arr2[] = {6,7,8,8,9,10,11,12};
int n = sizeof(arr1)/sizeof(arr1[0]);
int m = sizeof(arr2)/sizeof(arr1[0]);

for (int i = 0; i < n; i++)
      s.insert(arr1[i]);

for (int i = 0; i < m; i++)
      s.insert(arr2[i]);


for (auto itr = s.begin(); itr != s.end(); itr++)
    cout << *itr << " ";










}