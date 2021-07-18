//https://codeforces.com/problemset/problem/1547/B

#include<iostream> 
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int p=0;
    int q = s.length()-1;
    string ans="";
    while(p<=q){
        if(s[p]>s[q])
        ans=s[p++]+ans;
        else
        ans=s[q--]+ans;
    }
    
       string ab = "abcdefghijklmnopqrstuvwxyz";
    
    int flag =0;
 
    for(int i=0;i<ans.length();i++){
        if(ans[i]!=ab[i])
        {
            flag = 1;
            break;
        }
    }
    
    
         if(flag == 0 )
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
