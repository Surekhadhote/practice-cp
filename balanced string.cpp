#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int n) {
        int ori=n;
        string p = "abcdefghijklmnopqrstuvwxyz";
        string t="";
        while(n>=26){
            t+=p;
            n-=26;
        }
        
       if(n!=0&&n%2==0){
           int l = n/2;
           int q = n/2;
           t+=p.substr(0,l);
           t+=p.substr(26-q,l);
         }
           else{
            int w = ori;
            int sum = 0;
            while(w>0){
                sum+=w%10;
                w=w/10;
            }
          if(sum%2==0){
           int l = (n+1)/2;
           int q = (n-1)/2;
           t+=p.substr(0,l);
           t+=p.substr(26-q,q);
            }else{
                
           int l = (n-1)/2;
           int q = (n+1)/2;
           t+=p.substr(0,l);
           t+=p.substr(26-q,q);
            }
      }
     
        return t;
    }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}
  // } Driver C
