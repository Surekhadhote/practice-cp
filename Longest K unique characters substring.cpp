#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution{
    public:
  int longestKSubstr(string s, int k) {
  int i=0,j=0;
   map<int,int>mp;
  int m =-1;
   for(j=0;j<s.length();j++){
      mp[s[j]]++;
    
      if(mp.size()==k){
           m = max(m,j-i+1);
      }
      if(mp.size()>k){
          while(mp.size()>k){
              auto it = mp.find(s[i]);
              if(it!=mp.end()){
                  it->second = it->second-1;
              }
              if(it->second == 0)
               mp.erase(it);
               i++;
          }
      }
      
     }
   return m;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}
  // } Driver 
