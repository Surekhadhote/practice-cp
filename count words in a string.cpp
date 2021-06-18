class Solution {
public:
    int countSegments(string s) {
        int c = 0;
        string t ="";
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                if(t!="")
                c++;
               t="";
            }else if(s[i]!=' '){
                t = t+s[i];
            }
        }
        if(t!="")
        return c+1;
        else
           return c;
    }
};
