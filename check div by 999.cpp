#include<bits/stdc++.h>
using namespace std;
bool isDivisible999(string N);


// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string N ;
	cin>>N;
	int n = N.length();
	if (isDivisible999( N))
		cout << "Divisible\n";
	else
		cout << "Not divisible\n";
	}
	return 0;
}// } Driver Code Ends
bool isDivisible999(string num)
{ int n = num.length();
    if (n == 0 && num[0] == '0')
       return true;
    if (n % 3 == 1)
       num = "00" + num;
    if (n % 3 == 2)
       num = "0" + num;
 
    int gSum = 0;
    for (int i = 0; i<n; i++)
    {
        int group = 0;
        group += (num[i++] - '0') * 100;
        group += (num[i++] - '0') * 10;
        group += num[i] - '0';
        gSum += group;
    }
 

    if (gSum > 1000)
    {
        num = to_string(gSum);
        n = num.length();
        gSum = isDivisible999(num);
    }
    return (gSum == 999);
  
}
