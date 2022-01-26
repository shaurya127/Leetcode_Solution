class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>v;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mp.find(x)!=mp.end()){
                return {i,mp[x]};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};