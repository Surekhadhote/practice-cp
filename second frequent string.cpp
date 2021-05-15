

#include<bits/stdc++.h>
using namespace std;




class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
    unordered_map<string ,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
	string m1 = arr[0],m2;
	int max1 =0,num=0;
	
    for(auto i : mp){
	if (i.second > max1){
	    int t = max1;
	    string s = m1;
	    max1 = i.second;
        m1 = i.first;
        num = t;
        m2 = s;
		}
		else if (i.second > num && i.second != max1){
            num = i.second;
            m2 = i.first;
		}
    }
    
	return m2;
    }
};



int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
