class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
      
        vector<int> s;
          int q = numbers.size()-1;
          int p=0;
        while(p<q){
          
            if(numbers[p]==target-numbers[q]){
                 s.push_back(p+1);
                 s.push_back(q+1);
                return s;
            }
           else if(numbers[q]+numbers[p]>target)
               q--;
           else 
                p++;
            
        }
            
              return { };
        
    }
};
