#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int distinct(vector<vector<int>> m, int n)
    {set<int> s;
        for(int i=0;i<n;i++){
            s.insert(m[0][i]);
        }
     
      for(int i=1;i<n;i++){
            set<int> s2;
            for(int j=0;j<n;j++){
                auto it = s.find(m[i][j]);
                if(it!= s.end()){
                    s2.insert(m[i][j]);
                }
            }
            s = s2;
        }
    
return s.size();
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        vector<vector<int>> M(N, vector<int>(N, 0));
        for(int i = 0;i < N*N; i++)
            cin>>M[i/N][i%N];
        
        Solution ob;
        cout<<ob.distinct(M, N)<<"\n";
    }
    return 0;
}  // } Driver Code Ends
