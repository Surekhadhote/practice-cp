class Solution {
public:
    string reverseOnlyLetters(string s) {
     int p=0,q=s.length()-1;
 
 while(p<q){
    if(!(s[p]>='a'&&s[p]<='z'||s[p]>='A'&&s[p]<='Z')&&p<s.length()){
    p++;
    }
    else if(!(s[q]>='a'&&s[q]<='z'||s[q]>='A'&&s[q]<='Z')&&q>0){
    q--;    
    }
    else{
     char t = s[p];
     s[p]=s[q];
     s[q]=t;
     p++;q--;
       }
     }
     return s;
    }
};
