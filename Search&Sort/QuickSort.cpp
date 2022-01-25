#include <bits/stdc++.h>
using namespace std;

void printArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

// // function to rearrange array (find the partition point)
// int partition(int array[], int low, int high)
// {

//     // select the rightmost element as pivot
//     int pivot = array[high];
//     // cout<<endl<<pivot<<endl;

//     // pointer for greater element
//     int i = (low - 1);

//     // traverse each element of the array
//     // compare them with the pivot
//     for (int j = low; j < high; j++)
//     {
//         if (array[j] <= pivot)
//         {
//             // if element smaller than pivot is found
//             // swap it with the greater element pointed by i
//             i++;
//             // swap element at i with element at j
//             swap(&array[i], &array[j]);
//         }
//     }

//     // swap pivot with the greater element at i
//     swap(&array[i + 1], &array[high]);
//     // return the partition point
//     return (i + 1);
// }

//  void quickSort(int array[], int low, int high)
// {
//     if (low < high)
//     {
//         // find the pivot element such that
//         // elements smaller than pivot are on left of pivot
//         // elements greater than pivot are on righ of pivot
//         int pi = partition(array, low, high);

//         // recursive call on the left of pivot
//         quickSort(array, low, pi - 1);

//         // recursive call on the right of pivot
//         quickSort(array, pi + 1, high);
//     }
// }

int partitionKaushik(int a[], int lb, int ub)
{
    int pivot = a[lb];
    int start = lb;
    int end = ub;
    while (start < end)
    {
        while (a[start] <= pivot)

            start++;

        while (a[end] > pivot)

            end--;

        if (start < end)

            swap(a[start], a[end]);
    }
    swap(a[lb], a[ub]);
    return end;
}
void quickSortKaushik(int a[], int lb, int ub)
{
    if (lb < ub)
    {
        int loc = partitionKaushik(a, lb, ub);
        quickSortKaushik(a, lb, loc - 1);
        quickSortKaushik(a, loc + 1, ub);
    }
}

int main()
{
    int data[] = {8, 7, 6, 1, 0, 9, 2};
    int pivot;
    int n = sizeof(data) / sizeof(data[0]);

    cout << "Unsorted Array: \n";
    printArray(data, n);

    quickSortKaushik(data, 0, n - 1);

    cout << "Sorted array in ascending order: \n";
    printArray(data, n);
}