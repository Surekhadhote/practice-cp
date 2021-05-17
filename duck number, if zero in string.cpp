#include <bits/stdc++.h>
using namespace std;
 
bool check_duck(string N);
 
int main(void)
{
    int t; 
    cin>>t;
    while(t--)
    {
        string N; 
        cin>>N; 
  
        if (check_duck(N)) 
            cout << "YES\n"; 
        else
            cout << "NO\n"; 
     
    }
}// } Driver Code Ends


bool check_duck(string N){

    if(N[0] == '0' )
    return false;
   
    if (N.find('0') >= 0 && N.find('0')<=N.length())
    return true;
    else 
    return false;
}
