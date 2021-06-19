// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<string> findMatchedWords(vector<string> dict,string pattern);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> s(n);
		for(int i=0;i<n;i++)
		    cin>>s[i];
		
		string tt;
		cin>>tt;
		
		vector<string> res = findMatchedWords(s,tt);
        sort(res.begin(),res.end());
		for(int i=0;i<res.size();i++)
		    cout<<res[i]<<" ";
		cout<<endl;
		
	}
}// } Driver Code Ends


/* The function returns a  vector of strings 
present in the dictionary which matches
the string pattern.
You are required to complete this method */
vector<string> findMatchedWords(vector<string> dict, string pattern)
{ vector<string> v;
 int a[256];
    for(int i=0;i<pattern.length();i++){
        a[pattern[i]] = i;
    }
    string matcher = "";
    for(int i=0;i<pattern.length();i++){
        matcher+=a[pattern[i]]+'0';
    }
   
    for(int i=0;i<dict.size();i++){
        
        string x = dict[i];
      
      int b[256];
    for(int i=0;i<x.length();i++){
        b[x[i]] = i;
    }
    string x1 = "";
    for(int i=0;i<x.length();i++){
        x1+=b[x[i]]+'0';
    }
    
       if(matcher == x1)v.push_back(x);
    
    }
    return v;
       
}
