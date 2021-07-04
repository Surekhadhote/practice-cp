class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int p = 0;
        int q = 1;
        
        while(q<nums.size()){
            
            if(nums[p]!=0)p++;
            if(nums[q]!=0&&nums[p]==0){
                
               nums[p] = nums[q];
               nums[q]=0;
            }
            
            q++;
        }
        
    }
};
