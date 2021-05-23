#include <iostream>
#include<bits/stdc++.h>
using namespace std;

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
  
int main() {

int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   map<int ,int> mp;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
          mp[a[i]]++;
    }
    set<pair<int, int>, comp> S(mp.begin(),mp.end());
    for(auto i : S){
        for(int j=0;j<i.second;j++){
        cout<<i.first<<" ";}
    }
    cout<<endl;
}
	return 0;
}
