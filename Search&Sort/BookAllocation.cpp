#include <vector>
#include <iostream>
using namespace std;
// m -> no. of students
// n -> no. of books
bool isPossible(vector<int> arr, int n, int m, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < n; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }

        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                return false;
            }
            pageSum = arr[i]; // for new student
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m)
{
    int sum = 0, ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int s = 0, e = sum;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int n = 4;
    int m = 2; // students 
    vector<int> arr = {10, 20, 30, 40};
    cout << "The minimum value of the maximum number of pages in book allocation is: " << allocateBooks(arr, n, m);
}