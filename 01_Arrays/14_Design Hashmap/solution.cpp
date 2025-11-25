class MyHashMap {
public:
    MyHashMap() {
        
    }
    unordered_map<int,int>m;
    void put(int key, int value) {
        m[key]=value;
    }
    
    int get(int key) {
        if(m.find(key) !=m.end()) return m[key];
        else return -1;
    }
    
    void remove(int key) {
        m.erase(key);
    }
};
