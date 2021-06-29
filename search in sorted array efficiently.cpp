class Solution {
public:
    
    
    bool search(vector<int>& nums, int target) {
        
        if(nums[0] == target)
            return true;
        else if(nums[0]<target){
        for(int i=1;i<nums.size();i++){
            if(nums[i]==target)
                return true;
            if(nums[i]>target)
                return false;
          }
        }else{
             for(int i=nums.size()-1;i>0;i--){
            if(nums[i]==target)
                return true;
            if(nums[i]<target)
                return false;
          }
        }
        return false;
    }
};
