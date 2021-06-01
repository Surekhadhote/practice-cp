#include <iostream>
using namespace std;
int main(int argc, char *ar[])
{
    int n;
	cin>>n;
	int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
	int m1=INT_MIN,m2=INT_MIN,m3 = INT_MIN;
	for(int i=0;i<n;i++){
     if(a[i]>m1){
		 m3 = m2;
		 m2 = m1;
		 m1 = a[i];
	 }else if( a[i]>m2){
      m3 = m2;
	  m2 = a[i];
	 }
	 else
	 m3 = a[i];
	}

	cout<<m3;
}
