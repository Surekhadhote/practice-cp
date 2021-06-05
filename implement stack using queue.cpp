class MyStack {
     queue <int> q1;
     queue<int> q2;
    
    
public:
    /** Initialize your data structure here. */
    MyStack() {
     
    }
    
    /** Push element x onto stack. */
    void push(int x) {
     q1.push(x);   
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
      if (q1.empty())
            return -1;
  
        while (q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }
  
        // last pushed element
        int temp = q1.front();
  
        // to empty the auxiliary queue after
        // last operation
        q1.pop();
  
        // push last element to q2
     
  
        // swap the two queues names
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return temp;
        
    }
    
    /** Get the top element. */
    int top() {
        if (q1.empty())
            return -1;
  
        while (q1.size() != 1) {
            q2.push(q1.front());
            q1.pop();
        }
  
        // last pushed element
        int temp = q1.front();
  
        // to empty the auxiliary queue after
        // last operation
        q1.pop();
  
        // push last element to q2
        q2.push(temp);
  
        // swap the two queues names
        queue<int> q = q1;
        q1 = q2;
        q2 = q;
        return temp;
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
      if (q1.empty()&&q2.empty())
            return true; 
        
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
