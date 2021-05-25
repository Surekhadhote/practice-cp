#include <bits/stdc++.h>
using namespace std;
void rotate(int a[],int f,int l){
    int x = a[l];
    for(int i=l;i>f;i--){
         a[i]=a[i-1];
    }
    a[f] = x;
}

int findindexelem (int a[],int r[][2],int ro,int index){
    for(int i=0;i<2;i++)
      rotate(a,r[i][0],r[i][1]);
  return a[index];
}

int main()
{
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

int rotat;
cin>>rotat;
int ranges[rotat][2] = {{0,2},{0,3}};
int index = 1;
cout<<findindexelem(a,ranges,rotat,index)<<endl;

//rotate(a,0,2);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
    return 0;
}
