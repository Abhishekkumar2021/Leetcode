/*
 * @lc app=leetcode id=146 lang=cpp
 *
 * [146] LRU Cache
 */

// @lc code=start
class LRUCache {
    int capacity;
    list<pair<int,int>> l;
    map<int, list<pair<int,int>> :: iterator> m; 

public:
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    int get(int key) {
        if(m.find(key)==m.end()) return -1;
        
        return m[key]->second;
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()){
            m[key] = value;
        }
        else if(m.size()==capacity){

        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
// @lc code=end

