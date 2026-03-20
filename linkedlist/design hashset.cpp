class MyHashSet {
    vector<bool> present;
public:
    MyHashSet() {
        present.resize(1000001,false);
      //A HashSet is a data structure that stores unique elements and does not allow duplicates.
    }
    
    void add(int key) {
       present[key] = true;
    }
    
    void remove(int key) {
       present[key] = false;
    }
    
    bool contains(int key) {
       return present[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
 //https://leetcode.com/problems/design-hashset/?envType=problem-list-v2&envId=linked-list