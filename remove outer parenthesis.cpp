class Solution {
public:
    string removeOuterParentheses(string s) {
       string r = "";
        int c=0;
     for(int i=0;i<s.length();i++)   {
         
         if(s[i] == '('){
          c++;
             if(c>1)r+=s[i];
              
         }else{
             c--;
             if(c>=1)r+=s[i];
         }
     }
     return r;
    }
};
