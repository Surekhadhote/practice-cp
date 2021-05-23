#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends



class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
   stack <string> st;
string t = "";
for(int i=0;i<s.length();i++){
    if(s[i] == '.'){
        st.push(t);
        st.push(".");
        t = "";
    }else{
        t = t + s[i];
    }
}
st.push(t);
while (!st.empty()) {
    string p = st.top();
    cout<<p;
    st.pop();
}


    }
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
} 
