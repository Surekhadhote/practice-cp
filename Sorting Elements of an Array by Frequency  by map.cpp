#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends

class Solution{
    public:
    //Complete this function
    //Function to sort the array according to frequency of elements.
    
struct comp {
    template <typename T>
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second > r.second;
        }
        return l.first < r.first;
    }
};
  
 

    vector<int> sortByFreq(int arr[],int n)
    {
       map <int,int> mp;
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
        vector <int> v;
      set<pair<int, int>, comp> S(mp.begin(),mp.end());
       for(auto i : S){
        for(int j=0;j<i.second;j++){
            v.push_back(i.first);
        }  
     }
    
       return v;
    }
};

// { Driver Code Starts.

int main() {
	
	
	int t;
	cin >> t;
	
	
	while(t--){
	    
	    
	    int n;
	    cin >> n;
	    
	    int a[n+1];
	    
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution obj;
	    vector<int> v;
	    v = obj.sortByFreq(a,n);
	    for(int i:v)
	        cout<<i<<" ";
	    cout << endl;
	}
	
	return 0;
}
