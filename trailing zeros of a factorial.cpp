#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
   
    int trailingZeroes(int n)
    {
       int count = 0;
       while(n >= 5){
        n /= 5;
        cout<<n<<" ";
        count += n;
        }
        
        
       return count;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}  
