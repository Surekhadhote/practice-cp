class Solution {
public:
    bool backspaceCompare(string s, string t) {
     stack <char> st;
        string s1="",s2="";
        st.push('+');
        for(int i=0;i<s.length();i++){
            if(s[i] == '#' && st.top()!='+')
                st.pop();
            else if(s[i] != '#')
                 st.push(s[i]);
        }
        
        while(!st.empty()){
            s1+=st.top();
            st.pop();
        }
        
         st.push('+');
        for(int i=0;i<t.length();i++){
            if(t[i] == '#'&&st.top()!='+')
                st.pop();
            else if(t[i] != '#')
                 st.push(t[i]);
        }
        
        while(!st.empty()){
            s2+=st.top();
            st.pop();
        }
        
   //    cout<<s1<<" "<<s2;
        if(s1 == s2)
            return true;
        else return false;
    }
};
