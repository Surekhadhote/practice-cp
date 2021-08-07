class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        
        int c = 0,o=0,n=0;
        for(auto i:mp){
          
            if(i.second%2 == 0 )
                c+=i.second;
            else {
                c+=i.second-1;
            o++;}
        }
        if(o>=1)
            c++;
      return c;
    }
};
