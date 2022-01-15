// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends


int longestSubstrDistinctChars (string S)
{
    unordered_set<char>st;
    int start=0,end=0,len=0;
    int n=S.size();
    while(start<n && end<n){
        if(st.count(S[end])==0){
            st.insert(S[end]);
            end++;
            len=max(len,end-start);
        }
        else{
            st.erase(S[start]);
            start++;
        }
    }
    return len;
}