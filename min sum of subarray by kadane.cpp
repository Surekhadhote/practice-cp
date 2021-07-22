#include <iostream>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    for(int i=0;i<n;i++){
        int min = 327676;
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += a[j];
            if(min>sum)
             min=sum;
             if(sum > 0)sum = 0;
        }
        cout<<min<<" ";
    }
    cout<<endl;
}
	return 0;
}
