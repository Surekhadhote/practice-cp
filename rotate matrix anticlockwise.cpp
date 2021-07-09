#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);


 // } Driver Code Ends
//User function template for C++

/* matrix : given input matrix, you are require 
 to change it in place without using extra space */
void rotate(vector<vector<int> >& matrix)
{
     vector<vector<int>> mat;
        for(int i=0;i<matrix.size();i++){
            vector<int> t;
            for(int j=0;j<matrix[i].size();j++){
                t.push_back(0);
                
            }
            mat.push_back(t);
        }
        int k =-1, m = 0;
        for(int i=matrix.size()-1;i>=0;i--){
            m = 0;
            k++;
            for(int j=0;j<matrix[i].size();j++){
                
                mat[k][m++] = matrix[j][i];
                
            }
            
        }
           for(int i=0;i<matrix.size();i++){
          
            for(int j=0;j<matrix[i].size();j++){
           matrix[i][j] = mat[i][j];
                
            }
           
        }

}


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
