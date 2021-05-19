#include <iostream>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    int findSum(string str)
    {
    string t ="";
    int sum =0;
    for(char ch : str){
        if(isdigit(ch)){
            t = t+ ch;
        }else
        {
            sum = sum + atoi(t.c_str());
            t ="";
        }
    }
  return sum + atoi(t.c_str());
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
	// input alphanumeric string
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin>>str;
	    Solution obj;
	    cout << obj.findSum(str);
        cout<<endl;
	}
	return 0;
}
  // } Driver Code Ends
