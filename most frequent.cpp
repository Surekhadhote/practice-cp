#include<bits/stdc++.h>
using namespace std;
int countfreq(int a[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
	int max =0,num;
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
	return num;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int x = countfreq(a,n);
  cout<<x;
     return 0;
}
