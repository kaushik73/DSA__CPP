#include <bits/stdc++.h>
using namespace std;
int b[15];
void Merge(int a[], int lb, int mid, int ub)
{
    //  cout<<endl<<lb<<endl;

    int i = lb;
    //  cout<<endl<<i<<endl;
    int j = mid + 1;
    int k = lb;
    //  cout<<endl<<k<<endl;
    while (i <= mid && j <= ub)
    {
        if (a[i] <= a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    if (i > mid)
    {
        while (j <= ub)
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }
    else
    {
        while (i <= mid)
        {
            b[k] = a[i];
            i++;
            k++;
        }
    }
}
void MergeSort(int a[], int lb, int ub)
{
    if (lb < ub)
    { // that array has atleast 2 elements
        int mid = 0;
        mid = (lb + ub) / 2;
        // cout<<mid<<endl;
        MergeSort(a, lb, mid);
        MergeSort(a, mid + 1, ub);
        Merge(a, lb, mid, ub);
    }
}

int main()
{
    cout << "Merge Sort\n";
    // int n = 6;
    int a[6] = {2, 4, 24, 17, 5, 9};
    int lb = 0;
    int ub = sizeof(a) / sizeof(a[0]);
    // cout << ub << endl;
    MergeSort(a, lb, ub);
    for (int k = 0; k <= ub; k++)
    {
        cout << b[k] << " \n";
    }
    return 0;
}