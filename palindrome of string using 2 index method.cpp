class Solution{
public:	
	
	
	int isPlaindrome(string s)
	{
	    int p=0,q=s.length()-1;
	    while(p<q){
	        if(s[p]!=s[q])return 0;
	        p++;
	        q--;
	    }
	    return 1;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends
