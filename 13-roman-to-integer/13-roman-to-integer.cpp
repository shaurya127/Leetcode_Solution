class Solution {
public:
    
    int convertRoman(char x){
if (x=='I')
return 1;
else if(x == 'V')
return 5;
else if(x == 'X')
return 10;
else if(x == 'L')
return 50;
else if(x == 'C')
return 100;
else if(x == 'D')
return 500;
else if(x == 'M')
return 1000;
return 0;
}    
    
    
    int romanToInt(string s) {
        int n=s.size();
        int curr=0;
        int res=0;
        int prev=0;
        for(int i=n-1;i>=0;i--){
            char st=s[i];
            curr=convertRoman(st);
            if(curr>=prev){
                res=res+curr;
            }
            else{
                res=res-curr;
            }
            prev=curr;
        }
        return res;
    }
};