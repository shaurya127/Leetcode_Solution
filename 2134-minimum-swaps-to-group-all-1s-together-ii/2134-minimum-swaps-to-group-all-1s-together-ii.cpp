class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        int one=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                one++;
            }
        }
        int ans=INT_MIN;
        int arr[2*n];
        for(int i=0;i<2*n;i++){
            arr[i]=nums[i%n];
        }
        int window_ones=0;
        for(int i=0;i<2*n;i++){
            if(i>=one && arr[i-one]==1) window_ones--;
            if(arr[i]==1) window_ones++;
            ans=max(ans,window_ones);
        }
        return one-ans;
    }
};