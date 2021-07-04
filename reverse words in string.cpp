class Solution {
public:
    string reverseWords(string s) {
        string t="";
        string k = "";
      
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                k+=t+" ";
                t="";
                
            }else{
                t=s[i]+t;
            }
        }
        
        
        k+=t;
        return k;
    }
};
