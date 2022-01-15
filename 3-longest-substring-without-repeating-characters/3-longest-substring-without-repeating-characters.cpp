class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int start=0,end=0,len=0;
        int n=s.length();
        while(start<n && end<n){
            if(st.count(s[end])==0){
                st.insert(s[end]);
                end++;
                len=max(len,end-start);
            }
            else{
                st.erase(s[start]);
                start++;
            }
        }
        return len;
    }
};