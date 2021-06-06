#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


//Function to generate binary numbers from 1 to N using a queue.

string to_binary(int n){
    string s ="";
    while(n>0){
        int r = n%2;
        s = s+to_string(r);
        n = n/2;
    }
    return s;
}

vector<string> generate(int N)
{
	vector <string> t;
	for(int i =1;i<=N;i++){
	   string x = to_binary(i);
	   reverse(x.begin(),x.end());
	   t.push_back(x);
	}
	
	return t;
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code End
