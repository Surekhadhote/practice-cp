#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
      
   map<int,int> mp;
    for(int i=0;i<S.length();i++){
        mp[S[i]]++;
    }
  
    
     for (int i=0; i < S.length(); i++) {
        
        auto itr = mp.find(S[i]);
        if(itr->second == 1)
        return itr->first;
  
    } 
       return '$';
    }

};

// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    Solution obj;
        char ans = obj.nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
