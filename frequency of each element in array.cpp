#include<bits/stdc++.h>
using namespace std;
void countfreq(int a[],int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto i:mp){
        cout<<i.first<<"frequency is "<<i.second;
    }
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  countfreq(a,n);
     return 0;
}
