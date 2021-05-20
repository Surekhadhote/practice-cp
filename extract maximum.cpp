#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
    
    string t = "";
    bool a = false;
       int max = 0 ;
       for(int i=0;i<S.length()+1;i++){
           
           if(isdigit(S[i])){
              t = t+S[i];
              a = true;
           }
           else{
              int j = atoi(t.c_str());
              if(j>max)
              max =j;
              t = ""; 
          }
          
          
      }
     if(max == 0 && a== false && t==""){
         return -1;
     } 
     if(max == 0){
         return atoi(t.c_str());
     } 
       if(max == 0 && a == true && t!="" ){
           return atoi(S.c_str());
       }
       
       if(a == true)
       return max;
       else
       return -1;
    } 
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.extractMaximum(S)<<endl;
    }
    return 0; 
}   // 
//another method

/*
class Solution
{
  public:
    
    int extractMaximum(string S) 
    { 
        int num = 0, res = 0, flag =0; 
        for (int i = 0; i<S.length(); i++) 
        { 
            // If a numeric value comes, start converting 
            // it into an integer till there are consecutive 
            // numeric digits 
            if (S[i] >= '0' && S[i] <= '9') 
            {
                num = num * 10 + (S[i]-'0'); 
                flag = 1; //means that there is a digit present
            }
    
            else
            { 
                res = max(res, num); 
                num = 0; 
            } 
        } 
        if(flag == 1)
            return max(res, num); 
        else
            return -1;
    } 

};
*/
