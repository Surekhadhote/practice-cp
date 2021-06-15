#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
  public:
    string reverseWords (string s)
    {
        string st="";
        string t="";
       for(int i=0;i<s.length();i++){
          if(s[i]=='.'){
              reverse(t.begin(),t.end());
               st+=t+'.';
               t="";
           }else{
               t+=s[i];
           }
       }
       reverse(t.begin(),t.end());
       st+=t;
       return st;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.reverseWords (s) << endl;
    }
    return 0;
}
