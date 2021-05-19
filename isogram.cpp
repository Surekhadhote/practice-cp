#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        string S = s;
     map<int,int> mp;
    for(int i=0;i<S.length();i++){
       mp[S[i]]++;
     
    }
  
    
     for (int i=0; i < S.length(); i++) {
        
        auto itr = mp.find(S[i]);
        if(itr->second > 1)
        return false;
  
    } 
       return true;
    }
    
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.isIsogram(s)<<endl;
        
    }
	return 0;
}  // } 
