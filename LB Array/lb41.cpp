// A Simple Merge based O(n) solution to find
// median of two sorted arrays
#include <bits/stdc++.h>
using namespace std;

/* This function returns median of ar1[] and ar2[].
Assumption in this function:
Both ar1[] and ar2[] are sorted arrays */
int getMedian(int ar1[], int ar2[], int n, int m)
{
    sort(ar1,ar1+n);
    sort(ar2,ar2+m);
    int t = n+m;
    int a = t/2;
    if(t%2==0){
        // t is even Even Number 
        if(a>n){
            int rem = a-n;
            //median is in m;
           return  ar2[rem+1];
        }
            //median is in n;
           return ar1[a];
        }
    
    else{
        cout<<"n+m is odd";
        return 0;
    }
	
}

int main()
{
	int ar1[] = {9,10,11,12};
	int ar2[] = {5,8,10,20};
	int n1 = sizeof(ar1)/sizeof(ar1[0]);
	int n2 = sizeof(ar2)/sizeof(ar2[0]);
	cout << getMedian(ar1, ar2, n1, n2);
}

