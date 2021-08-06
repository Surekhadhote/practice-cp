#include <iostream>
using namespace std;
string rev(string s){
if(s.length() == 0)return s;
return  rev(s.substr(1,s.length()-1))+s[0];
}
int main()
{
string l;
cin>>l;
cout<<rev(l);
return 0;
}
