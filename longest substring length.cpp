public:
    int lengthOfLongestSubstring(string s) {
     
        if(s.length() == 0)return 0;
        set<char> st;
        int m = 0;
      int f =0 ,j =0;
        
      for(int i=0;i<s.length();i++){
         
          while(st.count(s[i])){
               st.erase(s[j]);
                ++j;
          }
          st.insert(s[i]);
              m = max(m,i-j+1);
          
         }
        
        
        return m;
    }
};
