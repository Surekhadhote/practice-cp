#include <iostream>
#include <bits/stdc++.h>
using namespace std;
string leftrotate (string s,int n){
	 string d = s.substr(n) + s.substr(0,n);
	 return  d;
	}
int main()
{
   string s1,s2;
   int f=0;
   cin>>s1>>s2;
   for(int i=0;i<s1.length();i++){
      
       if(s1 == s2){
       cout<<"is rotation\n";
       f =1;
       break;
       
       }
       
s2 = leftrotate(s2,1);
   }
   
   if(f==0)
   cout<<"no rotation";
    return 0;
}
