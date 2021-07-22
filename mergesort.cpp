#include <bits/stdc++.h> 
using namespace std; 


 // } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            int a[m+n];
        int p=0,q=0,c=0;
            while(p<n&&q<m){
                if(arr1[p]<arr2[q])
                a[c++]=arr1[p++];
                else
                a[c++]=arr2[q++];
            }
             
            if(p<n) {
                while(p<n)
                a[c++]=arr1[p++];
            }else{
                while(q<m)
                a[c++]=arr2[q++];
            }
            c=0;
            for(int i=0;i<n;i++){
                arr1[i]=a[c++];
            }for(int i=0;i<m;i++){
                arr2[i]=a[c++];
            }
        } 
};

// { Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 
  // } Driver
