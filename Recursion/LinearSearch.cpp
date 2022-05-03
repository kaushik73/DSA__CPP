#include <iostream>
using namespace std;

bool Search(int *arr, int size, int element)
{
    // base case
    if (size == 0)
    {
        return  false;
    }
    // Recursive relation
    if (arr[0] == element)
    {
        return true;
    }
    else
    {
        return Search(arr + 1, size - 1, element);
        // bool rempart = Search(arr + 1, size - 1, element);
        // return rempart;
    }
}

int main()
{

    int arr[5] = {2, 4, 1, 1, 1};
    int size = 5;
    int ele = 45;
    bool ans = Search(arr, size, ele);

    if (ans)
    {
        cout << "Element Found";
    }
    else
    {
        cout << "Not Found";
    }
    return 0;
}