// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;



 // } Driver Code Ends


class Solution{
  public:
    void rearrangeArray(int arr[], int n) {
       sort(arr,arr+n);
       int b[n];
       int f=0;
       int j=0;
       int i;
       for( i=0;i<n;i+=2){
        b[i] = arr[j++];
       }
       
      j=n-1;
      for(i=1 ;i<n; i+=2){
        b[i] = arr[j--];
       }
       
       for(int i=0;i<n;i++){
          arr[i] = b[i];
       }
  //  cout<<endl;
        
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        obj.rearrangeArray(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
