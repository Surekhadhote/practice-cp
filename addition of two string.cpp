#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends



class Solution
{
    public:
    //Function to remove common characters and concatenate two strings.
    string concatenatedString(string s1, string s2) 
    {
    string s="";
    string t="";
       s = s1+s2;
       unordered_map <char,int> mp;
       for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        for(int i=0;i<s.length();i++)
        {
            auto it = mp.find(s[i]);
           if(it != mp.end() && it->second == 1)
           t = t+s[i];
        }
      
        return t;
    }

};

// { Driver Code Starts.

/* Driver program to test above function */
int main() 
{ 
	int t;
	cin >> t;
	
	while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	Solution obj;
    	string res = obj.concatenatedString(s1, s2);
    	cout<<res<<endl;
	}
	return 0; 
}
  // } Drive
