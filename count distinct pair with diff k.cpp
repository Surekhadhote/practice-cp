#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:
	int TotalPairs(vector<int>nums, int k){
	 int c=0;
	 set <int> s;
	 for(int i=0;i<nums.size();i++){
	     s.insert(nums[i]);
	 }
	 for(auto i : s){
	    auto it = s.find(i+k);
	    if(it != s.end()){
	        c++;
	    }
	 }
	
	if(k==0)
	return c/s.size();
	
	    return c;
	}
	
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, k;
		cin >> n >> k;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.TotalPairs(nums, k);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code En
