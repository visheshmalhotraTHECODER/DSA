class MyHashMap {
public:

    vector<pair<int,int>>jhola;
    MyHashMap() {

        
    }
    
    void put(int key, int value) {
        for(auto &p : jhola){
            if(p.first==key){
                p.second = value;
                return;
            }
        }
        jhola.push_back({key,value});
        
    }
    
    int get(int key) {
        for(auto& g : jhola){
            if(g.first==key){
                return g.second;
            }
        }
        return -1;
        
    }
    
    void remove(int key) {
        for(int i = 0; i<jhola.size(); i++){
            if(jhola[i].first == key){
                jhola.erase(jhola.begin()+i);
                return ;
            }
        }
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */