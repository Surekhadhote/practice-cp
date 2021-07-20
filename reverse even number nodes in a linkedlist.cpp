#include<iostream>
#include<stack>
using namespace std;
class ll{
public:
    int data;
    ll* next;
public:   
    ll(int x){
     data = x;    
     next  = NULL;
    }
};
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
   stack<int> s;
   ll* nn = new ll(0);
ll* m = nn;  
  for(int i=0;i<n;i++){
    if(arr[i]%2 == 0){
    s.push(arr[i]);continue;}
    while(!s.empty()){
        nn->next = new ll(s.top());s.pop();
        nn = nn->next;
    }
     nn->next = new ll(arr[i]);nn = nn->next;
  }
   while(!s.empty()){
        nn->next = new ll(s.top());s.pop();
        nn = nn->next;
    }
m = m->next;
while(m!=NULL){
    cout<<m->data<<" ";
    m=m->next;
}
    return 0;
}
