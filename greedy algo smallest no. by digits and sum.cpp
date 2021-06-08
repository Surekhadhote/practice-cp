#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string smallestNumber(int s, int m){

    if (s == 0)
    {
        return "0";
    }
 
    
    if (s > 9*m)
    {
       
        return "-1";
    }
 
    int res[m];
 
    
    s -= 1;
 
    for (int i=m-1; i>0; i--)
    {
        
        if (s > 9)
        {
            res[i] = 9;
            s -= 9;
        }
        else
        {
            res[i] = s;
            s = 0;
        }
    }
 
 
    res[0] = s + 1;  
    
string t = "";
    for (int i=0; i<m; i++)
        t+= to_string(res[i]);
       
       return t;
    }
};


int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.smallestNumber(S,D) << endl;
    }
    return 0; 
}   //



//questio linkhttps://practice.geeksforgeeks.org/problems/smallest-number5829/1/?category[]=Greedy&category[]=Greedy&page=1&query=category[]Greedypage1category[]Greedy#
