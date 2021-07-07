class Solution {
public:
    bool isValid(string s) {
     stack<char> st;
        if(s.length()==1)return false;
        for(int i=0;i<s.length();i++){
            char c = s[i];
            if(c == '('|| c == '{' || c == '['){
            st.push(c);
         }else{
            if(st.empty()) return false;
            if(c == ')' && st.top() != '(') return false;
            if(c == '}' && st.top() != '{') return false;
            if(c == ']' && st.top() != '[') return false;
            st.pop();
        }
       }
        
      return st.empty();
    }
};
