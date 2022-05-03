#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

int partitionKaushik(int a[], int s, int e)
{
    int cnt = 0;
    int pivot = a[s];
    for (int i = s + 1; i <=e; i++)
    {
        if (a[i] <= pivot)
        {
            cnt++;
        }
    }

    // we know right place of p element
    int pivot_Index = s + cnt;
    swap(a[pivot_Index], a[s]);
 
    int i = s, j = e;
    while (i < pivot_Index && j > pivot_Index)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        // ye case hai left m bada pada hai aur right m chota
        if (i < pivot_Index && j > pivot_Index)
        {
            swap(a[i++], a[j--]);
        }
    }
    return pivot_Index;
}
void quickSortKaushik(int a[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    int p = partitionKaushik(a, s, e);
    quickSortKaushik(a, s, p - 1);
    quickSortKaushik(a, p + 1, e);
}

int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    // int pivot;
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    printArray(data, n);

    quickSortKaushik(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    printArray(data, n);
}