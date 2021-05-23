#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int, int> m;
        for (int i = 0; i < n; i++){
            m[arr[i]]++;
          
        }
        
        
        int c = 0;
        for(int i=0;i<n;i++){
            c = c + m[k-arr[i]];
            
            if(k-arr[i] == arr[i])
            c--;
        }
   return c/2;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}  // } 
