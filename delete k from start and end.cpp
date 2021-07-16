#include <iostream>
#include <deque>
  
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	   deque <int> d;
	   for(int i=1;i<n+1;i++)
         d.push_back(i);
         int b ;
         while(d.size()>0){
            int j=0;
        
             while(j++ < k){
                if(d.size()>0){
                 b = d.front();
                d.pop_front();}
               }
            j=k;
             while(j-- > 0){
              if(d.size()>0){
                 b = d.back();
                 d.pop_back();
                }
             }
        }
         
          cout<<b<<endl;
        
	}
	 return 0;
}
