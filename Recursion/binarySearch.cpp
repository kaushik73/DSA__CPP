#include<iostream>
using namespace std;

void print(int arr[], int s, int e) {

    for(int i=s; i<=e; i++) {
        cout << arr[i] << " ";
    } cout << endl<<endl;
}

bool binarySearch(int *arr, int s, int e , int k ) {

    int mid = s + (e-s)/2;
    cout<<"Mid is : "<<arr[mid]<<endl;
    //base case
    //element not found
    print(arr, s,e);
    if(s>e)
        return false;


    //element found
    if(arr[mid] == k)
        return true;

    if(arr[mid] < k) {
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main() {

    int arr[11] = {2,4,6,10,14,18,22,38,49,55,222};
    int size = 11;
    int key = 232;

    cout << "Present or not : " << binarySearch(arr, 0, size-1, key) << endl;

    return 0;
}