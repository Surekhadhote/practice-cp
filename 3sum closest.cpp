class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
     int diff = INT_MAX, len = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len&&diff!=0;++i){
            int l=i+1;
            int h = len-1;
            while(l<h){
                int sum = nums[l]+nums[h]+nums[i];
                if(abs(target-sum)<abs(diff))
                    diff = target-sum;
                if(sum<target)
                    ++l;
                else
                    --h;
            }
        }
        return target-diff;
    }
};
