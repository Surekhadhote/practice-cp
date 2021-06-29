class Solution {
public:
    char findTheDifference(string s, string t) {
        
     sort(s.begin(),s.end())   ;
        sort(t.begin(),t.end());
        int d=0,i;
        for( i=0;i<s.length();i++){
            d^=(s[i]^t[i]);
        }
        d = d^t[i];
        return d;
     }
};
