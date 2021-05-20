#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
       stack <char> s;
       s.push('+');
       s.push('+');
       if(x.length()%2 != 0)
       return false;
       else{
       for(int i=0;i<x.length();i++){
           if(x[i] == '('||x[i]=='{'||x[i]=='[')
           s.push(x[i]);
           else if(x[i] == ')'){
               if(s.top() == '(')
               s.pop();
               else
               return false;
           }else if(x[i] == ']'){
              if(s.top() == '[')
               s.pop();
               else
               return false;
           }else if(x[i] == '}'){
              if(s.top() == '{')
               s.pop();
               else
               return false;
           }
           
       }
       
       }
       return true;
 
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // }
