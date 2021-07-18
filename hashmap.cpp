class MyHashMap {
public:
    /** Initialize your data structure here. */
     map<int,int> mp;
    MyHashMap() {
       
    }
    
    /** value will always be non-negative. */
    void put(int key, int value) {
        auto it = mp.find(key);
        if(it != mp.end())
            mp[key] = value;
            else
        mp.insert({key,value});
    }
    
    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        auto it = mp.find(key);
        if(it != mp.end())
            return it->second;
        return -1;
    }
    
    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        mp.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
