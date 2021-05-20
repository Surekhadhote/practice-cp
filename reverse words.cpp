#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s ="hello world";
    stack <char> st;
    for(int i=0;i<s.length();i++){
        if(s[i]!= ' ')
        st.push(s[i]);
        else{
            while(!st.empty())
            {
                
            char g = st.top();
            cout<<g;
            st.pop();
        }
       cout<<" ";    
        }
    }
    while(!st.empty())
            {
                
            char g = st.top();
            cout<<g;
            st.pop();
        }
  

    return 0;
}
