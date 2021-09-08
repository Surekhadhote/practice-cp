class Solution {
public:
    bool canConstruct(string ra, string ma){
      int r[26]={0};
        for(int i=0;i<ra.length();i++){
            r[ra[i]-'a']++;
        }
          for(int i=0;i<ma.length();i++){
            r[ma[i]-'a']--;
        }
         for(int i=0;i<26;i++){
            if(r[i] >0)return false;
        }
         return true;
    }
};
