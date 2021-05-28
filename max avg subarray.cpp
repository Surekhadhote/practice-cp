#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++


class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
        int sum=0,msum =0,index=0;
        int c = 0;
        for(int i=0;i<k;i++){
        sum = sum + arr[i];
        }
        msum = sum;
        index=0;
        
        for(int i = 0;i<n;i++){
        if(k+c<n){
        sum = sum + arr[k+c];
        sum = sum - arr[i];
        }c++;
            if(sum>msum){
        msum = sum;
        index = i+1;}
        }
    
        return index;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver
