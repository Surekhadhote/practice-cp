class Solution {
public:
    
    bool isvowel(char c){
         if(c=='a'||c=='e'||c=='o'||c=='i'||c=='u'||c=='A'||c=='E'||c=='O'||c=='I'||c=='U')
             return true;
        return false;
    }
    
    string reverseVowels(string s) {
       

        int p=0,q=s.length()-1;
        while(p<q){
            
           if(isvowel(s[p])&&isvowel(s[q]))
           {
               char ch = s[p];
               s[p] = s[q];
               s[q] = ch;
               q--;
               p++;
           }else if(isvowel(s[p]))
               q--;
        else
            p++;
        
        
           
        }
                return s;
    }
};
