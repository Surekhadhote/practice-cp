#include <iostream>
#include<iomanip>
using namespace std;

double sq(double _val) {
    double low = 0; 
    double high = _val;
    double mid = 0; 

    while (high - low > 0.00001) {
            mid = low + (high - low) / 2; // finding mid value
            if (mid*mid > _val) {
                high = mid;
            } else {
                low = mid;
            }    
    }   
   
  return mid;
}


int main() 
{
  int n;
  cin>>n;
  cout<<fixed<<setprecision(2)<<sq(n);
    return 0;
}
