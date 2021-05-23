#include<bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        queue<int> q;
        while(n-->0){
            int a;
            cin>>a;
            q.push(a);
        }
        queue<int> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends
queue<int> modifyQueue(queue<int> q, int k)
{
stack <int> s;
for(int i=0;i<k;i++){
    s.push(q.front());
    q.pop();
}
queue<int> qu;
for(int i=0;i<k;i++){
    qu.push(s.top());
    s.pop();
}
while(!q.empty()){
    qu.push(q.front());
    q.pop();
}
return qu;

}
