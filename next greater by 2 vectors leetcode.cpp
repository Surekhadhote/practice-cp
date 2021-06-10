class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map <int,int> mp;
        for(int i=0;i<nums2.size();i++){
          
            
            int x = i+1;
            while(x<nums2.size()){
                if(nums2[i]<nums2[x]){
                    mp.insert({nums2[i],nums2[x]});
                    break;
                }
            x++;
            }
            
        }
        
        
        for(int i=0;i<nums1.size();i++){
            auto it = mp.find(nums1[i]);
            if(it!=mp.end()){
                nums1[i] = it->second;
               
            }else
                nums1[i] = -1;
        }
        
        return nums1;
    }
};
