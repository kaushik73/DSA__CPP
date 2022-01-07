#include <bits/stdc++.h>
using namespace std;

int main()
{
    // sort() takes 2 arguments 1st address of a point from which you want to shart your sorting and 2nd (last pointer+1)
    // complexity -> O(nlongn)
    const int n = 5;
    int arr[n] = {2, 6, 1, 4, 8};
    sort(arr, arr + n);
    cout << "Array After Sorting : ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Quick, Heap and Insertion sort are used in order to make this inbuilt sort function called INTRO Sort.
    cout << endl;
    vector<int> a(n);
    cout << "\nEnter 5 Elements : ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end()); //take input as address
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    printf("\n------------------------\n");

    vector<int> test1;
    cout << "\nTest 1\n";
    test1.push_back(23);
    test1.push_back(98);
    test1.push_back(12);
    for (int value : test1)
        cout << value << "\t";
    vector<int> test2(n);
    cout << "\nEnter 5 Elements  for test 2\n";
    cout << "\nTest 2\n";
    for (int i = 0; i < n; i++)
    {
        cin >> test2[i];
    }
    // 1st 5 values we have not given so it is taking 0 as default and for giving values we can use for loop with test2[i].
    test2.push_back(12);
    test2.push_back(89);
    test2.push_back(34);
    for (int value : test2)
        cout << value << "\t";

    printf("\n------------------------\n");


}
