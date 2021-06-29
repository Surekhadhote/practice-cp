class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int c=1;
        vector <int> v;
        v.push_back(nums[0]);
        int j=0;
        for(int i=1;i<nums.size();i++){
          if(nums[i]==v[j] && c<2  )    {
              v.push_back(nums[i]);
              j++;
              c++;
          }else if(nums[i]!=v[j]){
              
              v.push_back(nums[i]);
              j++;
              c=1;
          }
         
        }
  for(int k=0;k<v.size();k++){
      nums[k]=v[k];
  }
        
        
        return v.size();
    }
};
