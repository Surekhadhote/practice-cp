#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string p)
    {int res =0;
       stack <int> s;
       
       if (p.length()<1) return -1; 
  
       for(int i=0;i<p.length();i++){
           if(p[i]=='+')
           {
               int a,b;
               a = s.top();
               s.pop();
               b = s.top();
               s.pop();
               res = b+a;
               s.push(res);
           }
           else if(p[i] == '*')  {
               int a,b;
               a = s.top();
               s.pop();
               b = s.top();
               s.pop();
               res = b*a;
               s.push(res);
           }
           else if(p[i] == '-')  {
               int a,b;
               a = s.top();
               s.pop();
               b = s.top();
               s.pop();
               res = b-a;
               s.push(res);
           }
           else if(p[i] == '/')  {
               int a,b;
               a = s.top();
               s.pop();
               b = s.top();
               s.pop();
               res = b/a;
               s.push(res);
           }
           else
           s.push(p[i]-'0');
           
           
           cout<<s.top()<<" ";
       }
       
       return res;
    }
};

// { Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}
