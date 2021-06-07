class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = INT_MIN;
        int neww =0;
        for(int i=0;i<nums.size();i++){
            neww += nums[i];
            if(neww>max){
                max = neww;
            }if(neww<0)
                neww=0;
        }
        
        return max;
    }
};
