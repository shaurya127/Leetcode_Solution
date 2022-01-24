// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool checkTriplet(int arr[], int n) {
	    sort(arr,arr+n);
	    for(int i=n-1;i>=2;i--){
	        int max=arr[i];
	        int j=0;
	        int k=i-1;
	        while(j<k)
	        {
	            if((arr[j]*arr[j]+(arr[k]*arr[k]))==max*max){
	                return true;
	            }
	            else if((arr[j]*arr[j]+(arr[k]*arr[k]))<max*max){
	                j++;
	            }
	            else if((arr[j]*arr[j]+(arr[k]*arr[k]))>max*max){
	                k--;
	            }
	        }
	    }
	    return false;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.checkTriplet(arr, n);
        if (ans) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
  // } Driver Code Ends