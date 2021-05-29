#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
      set <int> s;
      vector <int> v;
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    
    set<int>::iterator it;
    it = s.begin();
    if(s.size()>=2){
    v.push_back(*it);
    it++;
    v.push_back(*it);
    }else if(s.size()==1){
     v.push_back(-1);
     }
  
    return v;
    
}
