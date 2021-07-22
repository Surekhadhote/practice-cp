class Solution {
public:
    int maxProduct(vector<int>& arr) {
        int max = INT_MIN;
        int mul = 1;
        for(int i=0;i<arr.size();i++){
          
            mul *= arr[i];
           
            if(mul>max)
            max = mul;
            if(mul == 0)
                mul = 1;
      }
        mul =1;
          for(int i=arr.size()-1;i>=0;i--){
           mul *= arr[i];
           if(mul>max)
            max = mul;
            if(mul == 0)
                mul = 1;
      }
        return max;
    }
};
