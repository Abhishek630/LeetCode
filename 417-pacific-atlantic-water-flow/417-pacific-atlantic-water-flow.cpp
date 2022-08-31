class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        queue<pair<int , int>> po , ao;
        
        int r = heights.size();
        int c = heights[0].size();
        
        vector<vector<bool>> pvis(r , vector<bool>(c , false));
        vector<vector<bool>> avis(r , vector<bool>(c , false));
        
        for(int i = 0; i < r ; i++) {
            po.push({i , 0});
            pvis[i][0] = true;
            ao.push({ i , c - 1});
            avis[i][c-1] = true;
        }
        
        for(int i = 1; i < c ; i++) {
            po.push({0 , i});
            pvis[0][i] = true;
        }
        
        for(int i = 0 ; i < c -1 ;i++) {
            ao.push({r - 1 , i});
            avis[r - 1][i] = true;
        }
        
        set<pair<int , int>> ps , as;
        
        int dx[] = {-1 , 0 , 1 , 0};
        int dy[] = {0 , -1 , 0 , 1};
        
        while(!po.empty()) {
            auto it = po.front();
            po.pop();
            
            ps.insert(it);
            
            int x = it.first;
            int y = it.second;
            
            for(int k = 0; k < 4; k++) {
                int newx = x + dx[k];
                int newy = y + dy[k];
                
                if(newx >=0 && newx < r && newy >= 0 && newy < c && !pvis[newx][newy] && heights[newx][newy] >= heights[x][y]) {
                    po.push({newx , newy});
                    pvis[newx][newy] = true;
                }
            }
        }
        
        while(!ao.empty()) {
            auto it = ao.front();
            ao.pop();
            
            as.insert(it);
            
            int x = it.first;
            int y = it.second;
            
            for(int k = 0; k < 4; k++) {
                int newx = x + dx[k];
                int newy = y + dy[k];
                
                if(newx >=0 && newx < r && newy >= 0 && newy < c && !avis[newx][newy] && heights[newx][newy] >= heights[x][y]) {
                    ao.push({newx , newy});
                    avis[newx][newy] = true;
                }
            }
        }
        
        vector<vector<int>> ans;
        
        for(auto it : ps) {
            auto f = as.find(it);
            if(f != as.end()) {
                ans.push_back({it.first , it.second});
            }
        }
        
        return ans;
    }
};