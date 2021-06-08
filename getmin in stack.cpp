class MinStack {
    stack <int> st;
public:
    /** initialize your data structure here. */
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        
        st.pop();
        
    }
    
    int top() {
        int x = st.top();
        return x;
    }
    
    int getMin() {
       int n = st.size();
        int arr[st.size()];
        int min = st.top();
        for(int i=st.size()-1;i>=0;i--){
            arr[i] = st.top();st.pop();
            if(arr[i] < min)
                min = arr[i];
        }
        for(int i=0;i<n;i++){
            st.push(arr[i]);
        }
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
