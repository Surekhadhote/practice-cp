#include<bits/stdc++.h>
using namespace std;
void countfreq(char a[],int n){
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(auto i :mp){
        if(i.second == 1)
        cout<<i.first<<"frequency is "<<i.second<<endl;
    }
}
int main()
{
  int n;
  cin>>n;
  char a[n];
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  countfreq(a,n);
     return 0;
}
