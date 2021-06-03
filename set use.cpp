#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	void matchPairs(char nuts[], char bolts[], int n) {
	   char a [] = {'!','#','$','%','&','*','@','^','~'};
	   set <char> s1,s2;
	    for(int i=0;i<n;i++){
	       s1.insert(nuts[i]);
	   }
	    for(int i=0;i<n;i++){
	       s2.insert(bolts[i]);
	   }
	   int j =0;
	   for(int i=0;i<9;i++){
	       auto it = s1.find(a[i]);
	        auto itr = s2.find(a[i]);
	        if(it != s1.end() && itr != s2.end())
	        {
	            nuts[j]= bolts[j] = a[i];
	            j++;
	        }
	       
	   }
	   
	   
	}

};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char nuts[n], bolts[n];
        for (int i = 0; i < n; i++) {
            cin >> nuts[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> bolts[i];
        }
        Solution ob;
        ob.matchPairs(nuts, bolts, n);
        for (int i = 0; i < n; i++) {
            cout << nuts[i] << " ";
        }
        cout << "\n";
        for (int i = 0; i < n; i++) {
            cout << bolts[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code
