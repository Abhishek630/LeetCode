class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int count =0;
        int m = grid.size();
        int n = grid[0].size();
        
        map<vector<int>,int> mp;
        int j=0;
        while(j<n){
        vector<int>v;
          for(int i=0;i<m;i++){
             v.push_back(grid[i][j]);
           }
            mp[v]++;
            j++;
        }
        
        int i=0;
        while(i<m){
        vector<int>v;
          for(int j=0;j<n;j++){
             v.push_back(grid[i][j]);
           }
           if(mp.find(v)!=mp.end()){
               count += mp[v];
           }
          i++;
        }
        return count;
    }
};