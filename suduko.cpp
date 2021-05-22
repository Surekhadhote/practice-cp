#include <iostream>
using namespace std;
int main()
{
    int k = 6;
     // cin>>n;
    for(int i=0;i<k;i++){
        for(int j=0;j<k;j++){
            cout<<(((k+1)/2 + i +j) % k+1)<<" ";
             }
        cout<<endl;
    }
    
    return 0;
    
}
