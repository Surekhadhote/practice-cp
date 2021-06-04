#include<bits/stdc++.h> 
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    string lookandsay(int n) {
        
        if(n==1)return "1";
        if(n==2)return "11";
        
        string t ="11";
       
    for(int i=3;i<=n;i++){
        int c =1;
        string x ="";
       for(int j=1;j<t.length()+1;j++){
          
           if(t[j] != t[j-1]){
                x += to_string(c)+ t[j-1];
               c=1;
           }
          else
           c++;
           
         }
        
         t = x;
    }
    return t;
}   
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        Solution obj;
        cout<<obj.lookandsay(n)<<endl;
    }
    return 0;
}  // } Driver Code E
