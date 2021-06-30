class ProductOfNumbers {
public:
    vector<int> s;
    ProductOfNumbers() {
        s={1};
    }
    
    void add(int num) {
        
        if(num==0){
            s.clear();
            s.push_back(1);
        }else
        s.push_back(num*s.back());
    }
    
    int getProduct(int k) {
        if(k>=s.size())return 0;
        return s.back()/(s[s.size()-1-k]);
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called `as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
