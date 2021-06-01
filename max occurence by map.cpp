#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	map <char,int> mp;
	for(int i=0;i<s.length();i++){
    mp[s[i]]++;
	}

	
	int max = 0;
	char a;
	for(auto i = mp.begin();i!=mp.end();i++){
	if(max < i->second){
		 max = i->second;
         a = i->first;
	 }
	}

cout<<a<<" "<<max;
}
