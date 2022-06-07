class Solution {
public:
    
    long long solve(string &s){
        long long ans=0;
        for(auto &x:s){
            ans=ans*10+(x-'a');
        }
        return ans;
    }
    
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
       long long f1=solve(firstWord);
        long long f2=solve(secondWord);
        long long f3=solve(targetWord);
        return f1+f2==f3;
    }
};