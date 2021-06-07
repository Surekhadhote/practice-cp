class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      if (nums.size() == 0) return 0;
    int i = 0;
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {
            i++;
            nums[i] = nums[j];
        }
    }
    return i + 1;
    }
};

//method 2
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};
//method 3
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
           s.insert(nums[i]);
          
        }
        vector<int> v;
         for(auto i:s){
             v.push_back(i);
          // s.insert(nums[i]);
        }
        nums = v;
    
    return s.size();
    }
};
