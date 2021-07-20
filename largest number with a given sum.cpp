#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return Largest Number

class Solution
{
    public:
    //Function to return the largest possible number of n digits
    //with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
       if(sum>n*9)return "-1";
      
       string t = "";
        
        while(n--){
                 
        if(sum>=9){
            sum=sum-9;
            t+=9+'0';
          }else if(sum<9 && sum>0){
           
            t+=(sum+'0');
               sum = 0;
         }
         else
             t+=0+'0';
       }
        return t;
       
    }
};

// { Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin>>t;

	while(t--)
	{
	    //taking n and sum
		int n,sum;
		cin>>n>>sum;
		
        Solution obj;
        //function call
		cout<<obj.largestNumber(n, sum)<<endl;
	}
	return 0;
}  // } Driver Code Ends
