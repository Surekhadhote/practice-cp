class Solution {
public:
    int thirdMax(vector<int>& num) {
       int m1=INT_MIN,m2=INT_MIN,m3=INT_MIN;
        set<int> nums;
          for(int i=0;i<num.size();i++){
              nums.insert(num[i]);
          }
        
        for(int i=0;i<num.size();i++){
            if(num[i]>m1){
                m3=m2;
                m2=m1;
                m1=num[i];
            }else if(m1>num[i]&&num[i]>m2){
                m3=m2;
                m2=num[i];
            }else if(m2>num[i]&&num[i]>m3){
                m3=num[i];
            }
        }
        
    
        if(nums.size()<3)return (m2>m1)?m2:m1;
 
        return m3;
    }
};
