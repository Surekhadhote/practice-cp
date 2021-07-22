#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int maxSubstring(string s)
	{
	   int max=-1, count = 0;
        for(int i=0;i<s.length();i++){
          
         if(s[i]=='0'){
          count++;
          if(max<count)max = count;
          continue;
          }
          else if(count > 0)
          count--;
         
          if(count<0)count = 0;
          }
        
        return max;   
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

   		cout << ob.maxSubstring(s) << "\n";
   	}

    return 0;
}
