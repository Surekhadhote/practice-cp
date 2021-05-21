#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
int divisibleBy11 (string S)
{
int e = 0;
int o = 0;
for(int i=0;i<S.length();i++){
    if(i%2 == 0)
    e+=S[i]-'0';
    else
    o+=S[i]-'0';
}

int ans =0;

if(e>o){
    ans = e-o;
    if(ans%11 == 0)
    return 1;
    else
    return 0;
}else
{
    ans = o-e;
    if(ans%11 == 0)
    return 1;
    else
    return 0;
}



	}
};

// { Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		string s; cin >> s;
		Solution ob;
		cout << ob.divisibleBy11 (s) << endl;
	}
}
