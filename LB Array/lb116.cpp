// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
      
       //code here
       vector<long long > left;
       vector<long long> right;
       vector<long long> ans;
       left.push_back(1);
       right.push_back(1);
       for(int i=0;i<n-1;i++){
           left.push_back(left[i]*nums[i]);
       }
       for(int i=n-1;i>=1;i--){
           right.push_back(right[n-1-i]*nums[i]);
       }
       reverse(right.begin(),right.end());
       for(int i=0;i<n;i++){
           ans.push_back(left[i]*right[i]);
       }
       return ans;
   }
};


// { Driver Code Starts.
int main()
 {
    int t;  // number of test cases
    cin>>t;
    while(t--)
    {
        int n;  // size of the array
        cin>>n;
        vector<long long int> arr(n),vec(n);
        
        for(int i=0;i<n;i++)    // input the array
        {
            cin>>arr[i];
        }
        Solution obj;
        vec = obj.productExceptSelf(arr,n);   // function call
        
        for(int i=0;i<n;i++)    // print the output
        {
            cout << vec[i] << " ";
        }
        cout<<endl;
    }
	return 0;
}  // } Driver Code Ends