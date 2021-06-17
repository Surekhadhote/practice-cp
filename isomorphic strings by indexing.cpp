
//question : https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1/?category[]=Strings&category[]=Strings&problemStatus=unsolved&page=1&query=category[]StringsproblemStatusunsolvedpage1category[]Strings#

#include<iostream>
#include<string.h>

using namespace std;
#define MAX_CHARS 256

 // } Driver Code Ends



class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
    if(str1.length()!=str2.length())return false;
        
    char a[256];
    char b[256];
    string s1="";
    string s2="";
    for(int i=0;i<str1.length();i++){
        a[str1[i]]=str2[i];
    }
     for(int i=0;i<str1.length();i++){
        s1 += a[str1[i]];
    }
     for(int i=0;i<str1.length();i++){
        b[str2[i]]=str1[i];
    }
        
   for(int i=0;i<str1.length();i++){
        s2 += b[str2[i]];
    }  
        
      //  cout<<s1<<" "<<str1<<" ";
      //  cout<<s2<<" "<<str2<<"  ";
        if(s1 == str2 && s2 == str1){
            return true;
        }
        return false;
    }
};

// { Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}  // } Driver Code Ends
