#include <iostream>
using namespace std;

int main()
{int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int emax1=a[0],emax2=-1,omax1=a[1],omax2=-1;
for(int i=0;i<n;i++){
    if(i%2 == 0){
    emax2 = a[i];
    if (a[i] > emax1){
    int t = emax1;
    emax1 = a[i];
    emax2 = t;
      }
    }
    else{
    omax2 = a[i];
    if (a[i] > omax1){
    int t = omax1;
    omax1 = a[i];
    omax2 = t;
      }
    }
}
cout<<"second largest even index is : "<<emax2;
cout<<endl<<"second largest odd indexx is : "<<omax2;
cout<<endl<<"sum is:"<<emax2+omax2;
    return 0;
}
