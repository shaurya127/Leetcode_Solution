// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string solve(string str1,string str2){
        string res="";
        int n1=str1.length();
        int n2=str2.length();
        for(int i=0,j=0;i<=n1-1 && j<=n2-1;i++,j++){
            if(str1[i]!=str2[j]){
                break;
            }
            else{
                res+=str1[i];
            }
        }
        return res;
    }
    
    string longestCommonPrefix (string arr[], int N)
    {
        string prefix=arr[0];
        for(int i=1;i<N;i++){
            prefix=solve(prefix,arr[i]);
        }
        if(prefix.length()==0){
            return "-1";
        }
        return prefix;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends