// { Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=A[i];
    }
    int left_sum=0;
    for(int i=0;i<n;i++){
        left_sum+=A[i];
        if(sum-left_sum==left_sum-A[i]){
            return i;
        }
    }
    return -1;
}