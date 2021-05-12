#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{int a=5,b=6;
 while (b != 0)
    {
        
        int carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
   
cout<< a;
    return 0;
}
