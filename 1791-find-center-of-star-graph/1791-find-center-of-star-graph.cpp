class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map<int,int>deg;
        for(auto i:edges){
            deg[i[0]]++;
            deg[i[1]]++;
        }
        
        int size = edges.size();
        
        for(auto it= deg.begin();it!= deg.end(); it++){
            if(it->second == size){
                return it->first;
            }
        }
        return -1;
    }
};