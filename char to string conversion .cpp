#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution{
    public:
	string printMinIndexChar(string str, string patt)
	{
	   set <char> s;
	   for(int i=0;i<patt.length();i++){
	       s.insert(patt[i]);
	   }
	   for(int i=0;i<str.length();i++){
	       auto it = s.find(str[i]);
	       if(it!=s.end()){
	            string d(1, str[i]);
	            return d;
	       }
	   }
	   return "$";
	}
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        string str;
        cin>>str;
        string patt;
        cin >> patt;
        Solution obj;
        cout<<obj.printMinIndexChar(str, patt)<<endl;
    }
    
	return 0;
}  // } Driver Cod
