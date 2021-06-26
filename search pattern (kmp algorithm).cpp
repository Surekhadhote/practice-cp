#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
    { 
    vector <int> v;
        int n = pat.length();
     for(int i=0;i<txt.length();i++){
        string t = txt.substr(i,n);
        if(pat == t)
        v.push_back(i+1);
      }
      
      
      if(v.size()<1)
      {
          v.push_back(-1);
      }
       return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
