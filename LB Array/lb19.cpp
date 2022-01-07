//  Merge Intervals
// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a;

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x, y;
        a.push_back({x, y});
    }

    sort(a.begin(), a.end());
    stack<pair<int, int>> s;
    s.push({a[0].first, a[0].second});
    for (int i = 0; i < n; i++)
    {
        int start1 = s.top().first;
        int end1 = s.top().second;
        int start2 = a[i].first;
        int end2 = a[i].second;
        if (end1 < start2)
        {
            s.push({start2, end2});
        }
        else
        { // We have to merge
            s.pop();
            end1 = max(end1, end2);
            s.push({start1, end1});
        }
    }

    while (!s.empty())
    {
        cout << s.top().first << " " << s.top().second << endl;
        s.pop();
    }
}

// 2ND APPROACH -------------------------------------
// https://youtu.be/RGr2RuH6iH4     TIME -> 10.50
/*
 #include<bits/stdc++.h> 
using namespace std; 

// An Interval 
struct Interval 
{ 
    int s, e; 
}; 

// Function used in sort 
bool mycomp(Interval a, Interval b) 
{ return a.s < b.s; } 

void mergeIntervals(Interval arr[], int n) 
{ 
    // Sort Intervals in increasing order of
    // start time
    sort(arr, arr+n, mycomp); 

    int index = 0; // Stores index of last element 
    // in output array (modified arr[]) 

    // Traverse all input Intervals 
    for (int i=1; i<n; i++) 
    { 
        // If this is not first Interval and overlaps 
        // with the previous one 
        if (arr[index].e >=  arr[i].s) 
        { 
               // Merge previous and current Intervals 
            arr[index].e = max(arr[index].e, arr[i].e); 
        } 
        else {
            index++;
            arr[index] = arr[i]; 
        }    
    } 

    // Now arr[0..index-1] stores the merged Intervals 
    cout << "\n The Merged Intervals are: "; 
    for (int i = 0; i <= index; i++) 
        cout << "[" << arr[i].s << ", " << arr[i].e << "] "; 
} 

// Driver program 
int main() 
{ 
    Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} }; 
    int n = sizeof(arr)/sizeof(arr[0]); 
    mergeIntervals(arr, n); 
    return 0; 
} 
*/