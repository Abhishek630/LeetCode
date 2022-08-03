class MyCalendar {
public:
    unordered_map<int, int>m;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto i=m.begin(); i!=m.end();i++){
            if(end>i->first && start<i->second){
                return false;
            }
        }
        m[start]= end;
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */