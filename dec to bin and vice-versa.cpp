// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution
{
public:

    string bin(int n){
        string x="";
        while(n>0){
            int r = n%2;
            x+=(r+'0');
            n=n/2;
        }
        
        return x;
    }
    int dec(string k){
        int j=0;int d =0,r;
        for(int i=0;i<k.length();i++){
            j+=pow(2,i)*(k[i]-'0');
        }
        return j;
    }
    
    int setKthBit(int N, int k)
    {
    string x = bin(N);
    x[k] = '1';
    int j = dec(x);
    return j;
    }
    
};




// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends
