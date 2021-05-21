#include<bits/stdc++.h>
using namespace std;
int check(string a,string b);
int main(){
    int t;
    cin>>t;
    while(t--)
    {
       string a, b;
    cin >> a >> b;
    cout<<check(a,b)<<'\n';


    }

    return 0;
}
// } Driver Code Ends


int check(string a,string b){
  
  a.erase(0, a.find_first_not_of('0'));
  b.erase(0, b.find_first_not_of('0'));
  if(a.length()>b.length())
  return 2;
  else if(b.length()>a.length())
return 1;
else
  for(int i=0;i<a.length();i++){
      if(a[i]>b[i])
      return 2;
      else if(a[i]<b[i])
      return 1;
      
  }
  return 3;
    
}
