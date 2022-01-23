// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    int minOperation(int N)
    {
        int cnt=0;
        while(N>0){
            if(N%2==0){
                N/=2;
                cnt++;
            }
            else{
                N-=1;
                cnt++;
            }
        }
        return cnt;
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	    {
	        int n;
	        cin>>n;
	        Solution ob;
	        cout<<ob.minOperation(n)<<endl;
	    }
}  // } Driver Code Ends