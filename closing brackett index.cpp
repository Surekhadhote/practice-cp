#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        int closing (string s, int pos)
        {
            int f=0,c=0;
        	for(int i=0;i<s.length();i++){
        	    if(pos == i)
        	    {
        	        c=0;
        	        f=1;
        	    }
        	    if(f==1){
        	        if(s[i]=='[')c++;
        	        if(s[i]==']')c--;
        	    }
        	    if(f==1&&c==0){
        	        return i;
        	    }
        	}
        	return -1;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int pos; cin >> pos;
        Solution ob;
		cout <<ob.closing (s, pos) << '\n';
	}
}
