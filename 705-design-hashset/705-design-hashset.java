class MyHashSet {
    private int capacity =0;
    private List<Integer>[] set = null;

    public MyHashSet() {
        capacity = 1500;
        set = new List[capacity];
    }
    
    public int getHashKey(int key){
        return key%capacity;
    }
    public void add(int key) {
        int hashIndex = getHashKey(key);
        if(set[hashIndex]== null){
            set[hashIndex] = new LinkedList<>();
        }
        
        if(set[hashIndex].indexOf(key)== -1){
            set[hashIndex].add(key);
        }
    }
    
    public void remove(int key) {
        if(contains(key)){
            int hashIndex = getHashKey(key);
            set[hashIndex].remove(set[hashIndex].indexOf(key));
        }
    }
    
    public boolean contains(int key) {
        int hashIndex = getHashKey(key);
        if(set[hashIndex]== null || set[hashIndex].indexOf(key)==-1){
            return false;
        }
        else{
            return true;
        }
    }
}

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet obj = new MyHashSet();
 * obj.add(key);
 * obj.remove(key);
 * boolean param_3 = obj.contains(key);
 */