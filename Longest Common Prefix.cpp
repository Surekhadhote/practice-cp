class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string t = strs[0];
        for(int i=0;i<strs.size();i++){
            string p="";
            for(int j=0;j<strs[i].length();j++){
                if(t[j]==strs[i][j])
                    p+=t[j];
                else
                    break;
                }
            t=p;
          }
        return t;
    }
};
