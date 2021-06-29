class MyCircularDeque {
public:
    /** Initialize your data structure here. Set the size of the deque to be k. */
    deque <int> g;
    int s =0;
    int k=0;
    MyCircularDeque(int m) {
      s = m;
    }
    
    /** Adds an item at the front of Deque. Return true if the operation is successful. */
    bool insertFront(int value) {
        if(k<s){
        g.push_front(value);
        k++;
        return true;
        }
        return false;
    }
    
    /** Adds an item at the rear of Deque. Return true if the operation is successful. */
    bool insertLast(int value) {
        if(k<s){
        g.push_back(value);
        k++;
        return true;
             }
        return false;
    }
    
    /** Deletes an item from the front of Deque. Return true if the operation is successful. */
    bool deleteFront() {
        if(k==0){
            return false;
        }
        g.pop_front();
        k--;
        return true;
    }
    
    /** Deletes an item from the rear of Deque. Return true if the operation is successful. */
    bool deleteLast() {
          if(k==0){
            return false;
        }
        g.pop_back();
        k--;
        return true;
    }
    
    /** Get the front item from the deque. */
    int getFront() {
          if(k==0){
            return -1;
        }
       return  g.front();
    }
    
    /** Get the last item from the deque. */
    int getRear() {
        if(k==0)
            return -1;
       return  g.back();
    }
    
    /** Checks whether the circular deque is empty or not. */
    bool isEmpty() {
         if(k==0)
            return true;
        return false;
    }
    
    /** Checks whether the circular deque is full or not. */
    bool isFull() {
       if(s == k)
           return true;
        return false;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
