#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
   getline(cin,s);
   sort(s.begin(),s.end());
   std::replace(s.begin(), s.end(), ' ', '\0');
   string ans = "";
   for(int i=97;i<123;i++){
       
       char t = i;
       if(s.find(t) != std::string::npos){
           continue;
       }else
       ans =ans + t;
      
   }
   cout<<ans;
   return 0;
}
