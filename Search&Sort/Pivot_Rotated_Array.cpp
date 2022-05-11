#include <iostream>
using namespace std;

// pivot -> minimum value
int pivot(int arr[], int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
        return s;
}
int main()
{
    int arr[5] = {5,7, 9, 1, 2};
    cout << "Pivot element index is : " << pivot(arr, 0, 5);
}