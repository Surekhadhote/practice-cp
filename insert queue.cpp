#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	 queue<int> g;
	 int n;
	 cin>>n;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a;
		 if(a==1){
		  cin>>b;
             g.push(b);
		 }else if(a == 2 && !g.empty()){
			  g.pop();
            }else if(a == 3 &&!g.empty())
			cout<< g.front()<<endl;
	 }
return 0;
}
