class Solution {
public:
    string makeGood(string st) {
        stack<char> s;
        s.push('0');
        for(int  i=0;i<st.length();i++){
               if(((s.top() == st[i]-32)||(s.top() == st[i]+32))&&s.size()>1)s.pop();
            else
                s.push(st[i]);
        }
        string x="";
        while(s.size()>1){
            x+=s.top();s.pop();
        }
        reverse(x.begin(),x.end());
    return x;
    }
};
