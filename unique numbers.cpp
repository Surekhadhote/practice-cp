#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {int l =L,r=R;
         vector <int> v;
        for (int i = l; i <= r; i++) {
     
        string s = to_string(i);//11365684793
        set<int> st(s.begin(), s.end());//1
      
          if (s.size() == st.size()) {
           v.push_back(i);
          }
      
         }
         
         return v;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  // } Driver
