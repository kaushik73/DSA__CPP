#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    const int n = 5;
    int arr[n] = {5, 2, 8, 43, 4};
    sort(arr, arr + n);   
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    // For Using lower_bound(start,end+1,value) and upper_bound(start,end+1,value) you must have sorted values and these functions returns pointer pointing to that value and if there is no value for pointing then it returns pointer next to last element i.e. garbage value.     Time Complexity ->  O(log(n))
    int *ptr1 = lower_bound(arr, arr + n, 5);
    int *ptr2 = lower_bound(arr, arr + n, 7);
    int *ptr3 = upper_bound(arr, arr + n, 5);
    int *ptr4 = upper_bound(arr, arr + n, 7);
    int *ptr5 = upper_bound(arr, arr + n, 43);
    // int *ptr6 = upper_bound(arr+4, arr+n, 99); this includes 8 and 43.

    cout << "\nLower Bond of 5 : " << *ptr1;
    cout << "\nLower Bond of 7 : " << *ptr2;
    cout << "\nUpper Bond of 5 : " << *ptr3;
    cout << "\nUpper Bond of 7 : " << *ptr4;
    cout << "\nUpper Bond of 43 : " << *ptr5; // 5 is a garbage value.
    if (ptr5 == (arr + n))
    {
        cout << "\nUpper Bound of 43 is Not Found ";
        // return 0;
    }

    cout << "\nFor Vectors\n";
    vector<int> v = {5, 2, 8, 43, 4};
    sort(v.begin(), v.end());
    auto it1 = lower_bound(v.begin(), v.end(), 5);
    auto it2 = upper_bound(v.begin(), v.end(), 5);
    cout << "\nLower Bond of vector 5 : " << (*it1);
    cout << "\nUpper Bond of vector 5 : " << (*it2);
    cout << "\nv.end() is : " << *(v.end());
    cout << "\nv.end()-1 is : " << *(v.end() - 1);

    printf("\n---------------");
    // for Sets and Maps We use these functions as shown below :- O(log(n)).
    // lower_bound(set1.begin(), set2.end(), 32); this is O(n) for Sets and Maps.

    set<int> set1;
    set1.insert(31);
    set1.insert(3);
    set1.insert(3);
    set1.insert(31);
    set1.insert(22);
    set1.insert(89);
    auto s1 = set1.lower_bound(32);
    cout << "\nLower Bond of Set 32 : " << (*s1);
}