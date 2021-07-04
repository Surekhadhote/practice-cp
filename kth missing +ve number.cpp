class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        int j = 0;
        int i = 1;
        int b = 0;
        while(j<n){
            if(arr[j] != i){
                b++;
            }else{
                j++;
            }
            if(b == k)
                return i;
            i++;
        }
        
        return arr[n-1]+k-b;
        
    }
};
