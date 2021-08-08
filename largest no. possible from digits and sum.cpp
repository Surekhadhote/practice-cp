
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    string findLargest(int n, int s){
        string nu = "";
        if(s==0 && n-1>s){
            return "-1";
        }
        while(n--){
            if(s>=9){
                nu+='9';
                s-=9;
            }else{
                nu+=s+'0';
                s=0;
            }
        }
        if(s==0)
        return nu;
        else
        return "-1";
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, S;
        cin>>N>>S;
        
        Solution ob;
        cout<<ob.findLargest(N, S)<<"\n";
    }
    return 0;
} 
