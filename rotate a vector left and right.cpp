class Solution {
public:
    
    void bufun(vector<int>& vec2, int k) {
        //left vector rotation
     std::rotate(vec2.begin(), vec2.begin()+k, vec2.end());
        //right vector rotation
      std::rotate(vec2.begin(), vec2.begin()+vec2.size()-k, vec2.end());
    }
    
    //without functions
     void reverse(vector<int>& nums,int s,int e) {
        while(s<e) {
            int temp=nums[s];
            nums[s]=nums[e];
            nums[e]=temp;
            s++;
            e--;
        }    
    }
    
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums,0,nums.size()-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.size()-1);
    }
};
