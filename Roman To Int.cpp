class Solution {
public:
    int val(char c){
         if(c == 'I')return 1;
         else if(c == 'V')return 5;
         else if(c == 'X')return 10;
         else if(c == 'L')return 50;
         else if(c == 'C')return 100;
         else if(c == 'D')return 500;
         else return 1000;
    }
    int romanToInt(string s) {
     int n = 0;
      for(int i=0;i<s.length();i++){
          if(val(s[i])<val(s[i+1]) && i<s.length()-1)
            n-= val(s[i]);
          else
            n+= val(s[i]);
        }
        return n;
    }
};
