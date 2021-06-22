//leetcode link :-https://leetcode.com/problems/set-matrix-zeroes/submissions/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       
        vector<int> v,t;
    
       if(matrix.size() == 1 && matrix[0].size()>1){
             for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                matrix[i][j] =0;
            }
          }
     }else {
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j] == 0){
                    v.push_back(i);
                    t.push_back(j);
                }
            }
        }
        
    for(int i=0;i<v.size();i++){
            int l = v[i];int m = t[i];
            for(int j=0;j<matrix[0].size();j++){
                matrix[l][j] =0;
            }
            for(int j=0;j<matrix.size();j++){
                matrix[j][m] =0;
            }
       }
     }
    }
};
