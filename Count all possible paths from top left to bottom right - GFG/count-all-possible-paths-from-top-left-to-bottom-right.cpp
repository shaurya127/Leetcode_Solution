// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int numberOfPaths(int m, int n){
         long long int mod = 1e9 + 7;
       vector<vector<int>> dp(m, vector<int>(n, 1));
       
      for(int i = 1; i < m; i++)
      {
          for(int j = 1; j < n; j++)
          {
              dp[i][j] = dp[i-1][j] % mod + dp[i][j-1] % mod;
          }
      }
      return (dp[m-1][n-1] % mod);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> m >> n;
        Solution ob;
        cout<<ob.numberOfPaths(m,n)<<endl;
    }
    return 0;
}
  // } Driver Code Ends