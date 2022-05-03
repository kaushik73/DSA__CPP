#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[], int l, int r)
{
    int mid = (l + r) / 2;
    int len1 = mid - l + 1;
    int len2 = r - mid;
    int *first = new int[len1];
    int *second = new int[len2];

    // copying values :

    int mI = l;
    for (int i = 0; i < len1; i++)
    {
        first[i++] = arr[mI++];
    }
    mI = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        first[i++] = arr[mI++];
    }


    // Merge 2 sorted array : 
     int index1 = 0;
    int index2 = 0;
    while(index1 < len1 && index2 < len2) {
        if(first[index1] < second[index2]) {
            arr[mI++] = first[index1++];
        }
        else{
            arr[mI++] = second[index2++];
        }
    }   

    while(index1 < len1) {
        arr[mI++] = first[index1++];
    }

    while(index2 < len2 ) {
        arr[mI++] = second[index2++];
    }

    delete []first;
    delete []second;
}
void MergeSort(int arr[], int l, int r)
{

    // base conditon
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;

    // left part sort karna h
    MergeSort(arr, l, mid);

    // right part sort karna h
    MergeSort(arr, mid + 1, r);

    Merge(arr, l, r);
}

int main()
{
    cout << "Merge Sort\n";
    int n = 6;
    int arr[6] = {2, 4, 24, 17, 5, 9};
    MergeSort(arr, 0, n - 1);
    for (int k = 0; k <= n; k++)
    {
        cout << arr[k] << " \n";
    }
    return 0;
}