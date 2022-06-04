class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                low++;
            }
            else{
                high--;
            }
        }
        return low;
        
    }
    
};