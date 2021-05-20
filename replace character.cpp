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
//another method
/* 
class Solution
{
  public:
    string modify (string s)
    {
         int n = s.length ();
        int i = 0, itr = 0;
    
        while (i < n)
        {
            if (s[i] != ' ') s[itr++] = s[i];
            i++;
        }
        return s.substr (0, itr);
    }
};*/
