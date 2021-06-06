class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         vector<int> v;
        map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp.insert({nums[i],i});
        }
         for(int i=0;i<nums.size();i++){
             auto it = mp.find(target-nums[i]);
             if(it->second != i&&it!=mp.end()){
                 v.push_back(it->second);
                 v.push_back(i);
             return v;
             }
            
        }
        
        return v;
    }
};
