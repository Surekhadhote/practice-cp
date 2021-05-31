
#include<bits/stdc++.h>
using namespace std;

   int prec(char c) {
    if(c == '^')
        return 3;
    else if(c == '*' || c == '/')
        return 2;
    else if(c == '+' || c == '-')
        return 1;
    else
        return -1;
}
    
    string infixToPostfix(string s)
    {
        std::stack<char> st;
        st.push('N');
        string res;
        int l = s.length();
        for(int i=0;i<l;i++){
           if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')){
                res+=s[i];
            }
            else if(s[i]=='('){
                st.push('(');
            }
        else if(s[i] == ')'){
              while(st.top()!='('&& st.top()!='N'){
                  char c = st.top(); st.pop();
                  res += c;
                 
              }
             if(st.top() =='(')
               st.pop();
          }
         else{
              while((prec(st.top())>=prec(s[i]))&&st.top()!='N'){
                    char c = st.top();                  st.pop();
                  res += c;

              }
              st.push(s[i]);
          }
    }
    
    while(st.top()!='N'){
                  char c = st.top();
                  res += c; st.pop();
                 
              }
            
 return res;
    }

int main(int argc, char *a[])
{
    string s;
    cin>>s;
     string x = infixToPostfix(s);
     cout<<x;
}
