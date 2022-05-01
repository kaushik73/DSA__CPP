#include <iostream>
using namespace std;

void update1(int arr[])
{
    arr[2] = 45;
    cout << &arr << endl;
    cout << arr << endl;
}
// what is difference between  passing *arr and arr[] ?
void update2(int *arr)
{ // what does *ptr indicationg here 
    arr[2] = 45;
    cout << &arr << endl; // why  its output is different from arr
    cout << arr << endl;
}
int main()
{
    int arr[3] = {2, 3, 4};
    cout << arr[2] << endl;
    update1(arr);
    cout << "After Passing arr[] : " << arr[2] << endl;
    update2(arr);
    cout << "After Passing *arr : " << arr[2] << endl;
}
