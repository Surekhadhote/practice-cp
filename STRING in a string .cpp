class Solution {
public:
    bool checkRecord(string s) {
        
         size_t found = s.find("LLL");
    if (found != string::npos)
         {
            return false;
        }
        int a=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'A')a++;
            if(a==2)return false;
        }
        return true;
    }
};
