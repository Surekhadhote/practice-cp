class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0,ans=0;
        for(int j=0;j<nums.size();j++){
            
            if(nums[j] == 0)
              i=j+1;  
            
          ans=max(j-i+1,ans);  
        }
        
        return ans;
    }
};
