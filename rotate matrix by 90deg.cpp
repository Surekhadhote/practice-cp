class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> mat;
        for(int i=0;i<matrix.size();i++){
            vector<int> t;
            for(int j=0;j<matrix[i].size();j++){
                t.push_back(0);
                
            }
            mat.push_back(t);
        }
        int l=matrix.size();
        int r=0;
        for(int i=0;i<matrix.size();i++){
            l--;
            r=0;
            for(int j=0;j<matrix[i].size();j++){
                int t;
                t = mat[r++][l] = matrix[i][j];
                
            }
            
        }
        
        for(int i=0;i<matrix.size();i++){
          
            for(int j=0;j<matrix[i].size();j++){
           matrix[i][j] = mat[i][j];
                
            }
           
        }
        
        
        
        
    }
};
