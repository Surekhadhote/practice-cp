#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
      bool a[n] = {false};
      int b[2];
      int c=0;
      for(int i=0;i<n;i++){
       if(a[arr[i]-1] == false)
          a[arr[i]-1]=true;
        else
           {
               b[c++] = arr[i];
           }
      }
      for(int i=0;i<n;i++){
        if(a[i] == false)
           {
           b[c++] = i+1;
           }
      }
   
   int *p = b;
      return p;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  
