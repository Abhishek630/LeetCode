class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> res;
        if(changed.size() % 2) return {};
        unordered_map<int,int> umap;
        for(auto x: changed){
            umap[x]++;
        }
        sort(changed.begin(),changed.end());
        for(auto it: changed){
            if(umap[it] == 0){continue;}
            if(umap[2*it] == 0) {return {};}
            if(umap[it] and umap[2*it]){
                umap[2*it]--;
                res.push_back(it);
                umap[it]--;
            }
        }
        return res;
    }
};