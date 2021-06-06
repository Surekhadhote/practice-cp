#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	

	// Function to generate a short url from integer ID
	string idToShortURL(long long int n) {
	   char url[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	   string surl ;
	    while(n){
	        surl.push_back(url[n%62]);
	        n=n/62;
	    }
	    reverse(surl.begin(),surl.end());
	    return surl;
	}

};

// { Driver Code Starts.

long long shortURLtoID(string);

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution ob;
        auto url = ob.idToShortURL(n);
        auto id = shortURLtoID(url);
        cout << url << "\n" << id << "\n";
    }
    return 0;
}

// Function to get integer ID back from a short url
long long int shortURLtoID(string shortURL) {
    long long int id = 0; // initialize result

    // A simple base conversion logic
    for (int i = 0; i < shortURL.length(); i++) {
        if ('a' <= shortURL[i] && shortURL[i] <= 'z')
            id = id * 62 + shortURL[i] - 'a';
        if ('A' <= shortURL[i] && shortURL[i] <= 'Z')
            id = id * 62 + shortURL[i] - 'A' + 26;
        if ('0' <= shortURL[i] && shortURL[i] <= '9')
            id = id * 62 + shortURL[i] - '0' + 52;
    }
    return id;
}  // } Driver Code Ends
