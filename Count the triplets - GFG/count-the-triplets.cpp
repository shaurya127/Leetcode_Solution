// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	int countTriplet(int arr[], int n)
	{
	    sort(arr,arr+n);
	    int cnt=0;
	    for(int i=0;i<n;i++){
	        int low=0,high=i-1;
	        while(low<high){
	            if(arr[i]==arr[low]+arr[high]){
	                low++;
	                high--;
	                cnt++;
	            }
	            else if(arr[i]<arr[low]+arr[high]){
	                high--;
	            }
	            else{
	                low++;
	            }
	        }
	    }
	    return cnt;
	}
};

// { Driver Code Starts.


int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

        Solution ob;
        cout << ob.countTriplet(arr, n) << "\n";

    }

    return 0;
}  // } Driver Code Ends