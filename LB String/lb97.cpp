// Isomorphic Strings 
// Easy Accuracy: 47.07% Submissions: 39918 Points: 2
// Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
// Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
// Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’




// { Driver Code Starts
// C++ program to check if two strings are isomorphic
#include<bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string s1, string s2)
  {
     int n=s1.length();
     int m=s2.length();
      if(n!=m) return false;
      int m1[256]={0},m2[256]={0};
     for(int i=0;i<n;i++){
         if(!m1[s1[i]]and !m2[s2[i]]){
             m1[s1[i]] = s2[i];
             m2[s2[i]] = s1[i];
         }
         else if(m1[s1[i]] != s2[i]) return false;
     }
       return true;
   }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends