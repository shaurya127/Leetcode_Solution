class Solution {
public:
    
    bool solve(string s1,string s2){
        unordered_map<char,int>mp;
        for(auto &x:s1){
            mp[x]++;
        }
        for(auto &x:s2){
            if(mp.find(x)==mp.end()){
                return false;
            }
        }
        return true;
    }
    
    int countConsistentStrings(string allowed, vector<string>& words) {
        int cnt=0;
        for(auto &x:words){
            if(solve(allowed,x)){
                cnt++;
            }
        }
        return cnt;
    }
};