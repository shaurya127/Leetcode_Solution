// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    long long solve(int n, long long a[], long long b)
    {
        
       bool ok=true;
        unordered_map<long long,long long>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        while(ok){
            if(mp.find(b)!=mp.end()){
                b=b*2;
            }
            else{
                ok=false;
            }
        }
        return b;
    }  
};

// { Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, b; cin >> n >> b;
        long long int a[n];
    	for(int i = 0; i < n; ++i){
    		cin >> a[i];
    	}
    	
    	Solution ob;
    	long long ans = ob.solve(n,a,b*1LL);
    	cout << ans << endl;
    }
}  // } Driver Code Ends