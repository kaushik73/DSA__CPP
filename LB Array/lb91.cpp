// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<vector<string>> Anagrams(vector<string> &string_list)
    {

        map<string, vector<string>> v;
        for (int i = 0; i < string_list.size(); i++)
        {
            string s = string_list[i];
            sort(s.begin(), s.end());
            v[s].push_back(string_list[i]); // dgo(v[s]) -> dog(a[i]) , god(a[i])
        }

        vector<vector<string>> ans(v.size());
        int index = 0;
        for (auto x : v)
        {
            auto temp = x.second;
            for (int j = 0; j < temp.size(); j++)
            {
                ans[index].push_back(temp[j]);
            }
            index++;
        }
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin >> string_list[i];
        Solution ob;
        vector<vector<string>> result = ob.Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends