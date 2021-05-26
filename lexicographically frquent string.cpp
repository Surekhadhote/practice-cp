#include <iostream>
#include <map>
#include <algorithm>
#include <cstdlib>
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends


class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
       vector <string> v;
       unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
	int max =0;
	string num;
    for(auto i:mp){
		if(max< i.second){
			max  = i.second; 
			num = i.first;
		}else if(max == i.second){
            if(i.first < num){
				num = i.first;
				max = i.second;
				
				
			}
		}
    }
    
	v.push_back(num);
	v.push_back(to_string(max));
	return v;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        Solution obj;
        vector<string> result = obj.winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }
    return 0;
}
  // } Driver Code Ends
