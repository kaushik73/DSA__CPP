// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define MAX 20


 // } Driver Code Ends
/*You are required to complete this method*/

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        int row=0, col =m-1,cnt=0;
        while(row<=n&&col>=0){
            if(M[row][col]==1){
                if(col==0){
                    // cout<<row;
                     cnt++;
                // cout<<cnt<<" ";
                   
                col--;
                }
            }
            else{
                row++;
            }
        }
        return (cnt*m);
    }
};


// { Driver Code Starts.
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        Solution obj;
        cout << obj.maxArea(M, n, m) << endl;
    }
}
  // } Driver Code Ends