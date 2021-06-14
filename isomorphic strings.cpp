class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length())
            return false;
        else{
            map<char,char> mp;
            int arr[256],v[256];
            for(int i=0;i<s.length();i++){
              arr[s[i]]  =t[i];
             }
              for(int i=0;i<s.length();i++){
            
              v[t[i]]  =s[i];
       
             }
            string j="",m="";
            for(int i=0;i<s.length();i++){
               j+=arr[s[i]];
             }
              for(int i=0;i<t.length();i++){
               m+=v[t[i]];
             }
            
            if(j == t && m==s)return true;
            else return false;
            }
        return true;
    }
};
