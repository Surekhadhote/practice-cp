class Solution {
public:
    string reverseStr(string s, int k) {
    
     if(s.length()==1) return s;
        if(s.length() <= k){
            reverse(s.begin(),s.end());
            return s;
        }
      for(int i=0;i<s.length();i+=2*k){
    
      if(i+k-1  < s.length()){
         int p=i,q=i+k-1;
         while(p<q){
            swap(s[p++],s[q--]);
         }
       }else{
           int p=i,q=s.length()-1;
         while(p<q){
            swap(s[p++],s[q--]);
         }
      }
         
         
     }
        return s;
    }
};
