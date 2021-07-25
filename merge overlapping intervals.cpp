class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& inte) {
        sort(inte.begin(),inte.end());
        vector<vector<int>> v;
        for(int i=0;i<inte.size();i++){
           if(v.empty()||v.back()[1]<inte[i][0])
               {
                v.push_back(inte[i]);
                }
            else{
                v.back()[1]=max(v.back()[1],inte[i][1]);
            }
          
        }
        return v;
    }
};
