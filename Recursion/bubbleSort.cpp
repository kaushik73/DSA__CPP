#include <iostream>
using namespace std;
void sortIt(int array[], int n)
// array ki copy create nahi ho rahi hai, 1st index ka address ja raha hai
{
    if (n == 0 || n == 1)
    {
        return;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (array[i] > array[i + 1])
        {
            swap(array[i], array[i + 1]);
        }
    }
    sortIt(array, n - 1);
}
int main()
{

    int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};

    sortIt(arr, 11);

    for (int i = 0; i < 11; i++)
    {
        cout << arr[i] << " ";
    }
}