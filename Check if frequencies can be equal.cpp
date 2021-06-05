#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	bool sameFreq(string s)
	{
	    map <int,int> mp;
	    for(int i=0;i<s.length();i++){
	        mp[s[i]]++;
	    }
	    int c = 0;
	    int max;
	    auto it = mp.find(s[0]);
	    max = it->second;
	    
	   int d =0 ,e=0;
	    for(auto i : mp){
	      if(max == i.second);
	      else if(max +1 == i.second )d++;
	      else if(max -1 == i.second )e++;
	      else
	         c++;
	      
	    }
	 //  cout<<c<<" ";.
	
	    if(c == 1 || c==0 )
         return true;
         
	   return false;
	}
};

// { Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.sameFreq(s)<<endl;
    }
}

