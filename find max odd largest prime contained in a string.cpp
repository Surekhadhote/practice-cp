#include <iostream>
#include<bits/stdc++.h>
using namespace std;

class Sol {
public:
string s;
    int largestOddprime(string num) {
        int j=0,oddprime;
        int maxprime = -1;
        int n = num.length();
        for(int i=num.length();i>=0;i--){
            if((num[i]-'0')%2 != 0){
                oddprime = stoi(num.substr(0,i+1));
                int x = is_prime(oddprime);
                if(maxprime < oddprime && x == 1)
                maxprime = oddprime;
            }j++;
        }
        return maxprime;
    }
    
    int is_prime(int n){
        for(int i=2;i<=sqrt(n);i++){
            if(n%i == 0)
            return 0;
        }
        return 1;
    }
};

int main()
{
Sol l;
cin>>l.s;
cout<<l.largestOddprime(l.s);
return 0;
}
