class Solution {
public:
    int maxProfit(vector<int>& p) {
        int n=p.size();
        int maxi=0;
        int minsofar=p[0];
        for(int i=0;i<n;i++){
            minsofar=min(minsofar,p[i]);
            maxi=max(maxi,p[i]-minsofar);
        }
        return maxi;
    }
};