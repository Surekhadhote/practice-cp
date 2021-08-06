class Solution {
public:
    string largestOddNumber(string num) {
        int j=0;
        int n = num.length();
        for(int i=num.length();i>=0;i--){
            if((num[i]-'0')%2 != 0){
                return num.substr(0,i+1);
            }j++;
        }
        return "";
    }
};
