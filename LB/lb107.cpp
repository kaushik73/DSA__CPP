#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // this is O(n) time  + O(n) space solution
    // int *findTwoElement(int *arr, int n) {
    //  int *a=new int[2];
    //     long long sum=0;
    //   vector<int>v;
    //   for(int i=0;i<n;i++){
    //       v.push_back(arr[i]);
    //   }
    //   sort(v.begin(),v.end());
    //   map<int,int>m;
    //   for(int i=0;i<n;i++){
    //       m[v[i]]++;
    //   }
    //   for(auto p:m){ // repeated element
    //       if(p.second==2){
    //           a[0]=p.first;
    //       }
    //   }
    //   for(int i=0;i<v.size();i++){
    //       sum+=v[i];
    //   }
    //   // ans  = n*(n+1)/2  gives real sum jo hona chahiye tha
    //   long long ans=(long long)(((long long)n*(long long)(n+1))/2);
    //   a[1]=ans-sum+a[0]; // missing element

    //   return a;
    // }

    // this is O(n) time  + O(1) space solution

    int *findTwoElement(int *arr, int n)
    {
        int *res = new int[2];
        int b, a;
        for (int i = 0; i < n; i++)
        {
            if (arr[abs(arr[i]) - 1] < 0)
            {
                // ye repeat hua hai kyuki humne negative nahi ki phele se hi
                // negative hua hua hai
                a = abs(arr[i]);
            }
            else
            {
                // like visited array bana rahe hai hum jis index pe ja rahe hai uski value
                // negative kar rahe hai. aur koi negative hone se bacha i.e. vo missing hai
                arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                b = i + 1;
            }
        }

        res[0] = a;
        res[1] = b;
        return res;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}