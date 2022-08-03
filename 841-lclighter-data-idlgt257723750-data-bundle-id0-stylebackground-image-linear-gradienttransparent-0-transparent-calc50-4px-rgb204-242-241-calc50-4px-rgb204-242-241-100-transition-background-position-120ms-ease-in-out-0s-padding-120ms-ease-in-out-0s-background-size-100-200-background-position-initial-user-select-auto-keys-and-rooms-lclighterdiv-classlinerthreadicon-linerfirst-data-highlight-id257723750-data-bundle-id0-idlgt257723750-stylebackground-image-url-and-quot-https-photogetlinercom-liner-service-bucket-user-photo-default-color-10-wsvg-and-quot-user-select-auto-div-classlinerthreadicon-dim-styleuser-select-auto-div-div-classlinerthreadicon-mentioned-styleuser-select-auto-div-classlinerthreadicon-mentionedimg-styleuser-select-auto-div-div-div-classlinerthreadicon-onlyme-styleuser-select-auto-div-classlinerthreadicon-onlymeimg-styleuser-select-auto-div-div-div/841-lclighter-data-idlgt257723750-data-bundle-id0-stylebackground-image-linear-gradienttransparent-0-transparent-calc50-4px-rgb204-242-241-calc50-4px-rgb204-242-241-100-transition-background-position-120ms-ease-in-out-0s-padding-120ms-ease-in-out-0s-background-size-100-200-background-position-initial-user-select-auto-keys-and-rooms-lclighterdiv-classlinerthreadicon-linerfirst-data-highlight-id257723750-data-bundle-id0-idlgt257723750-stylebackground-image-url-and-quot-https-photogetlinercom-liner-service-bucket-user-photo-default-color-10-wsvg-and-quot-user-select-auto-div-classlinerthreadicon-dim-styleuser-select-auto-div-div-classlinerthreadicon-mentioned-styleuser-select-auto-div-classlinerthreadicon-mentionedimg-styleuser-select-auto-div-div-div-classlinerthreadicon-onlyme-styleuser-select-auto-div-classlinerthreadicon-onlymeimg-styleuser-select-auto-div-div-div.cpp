class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> vis(n, false);
        dfs(rooms,vis,0);
        
        for(int i=0; i<n;i++){
            if(vis[i]==false){
                return false;
            }
        }
        return true;
    }
        
    void dfs(vector<vector<int>>& rooms, vector<bool>&vis, int src){
        vis[src]= true;
            
        for(auto x: rooms[src]){
            if(vis[x]== false){
                dfs(rooms,vis,x);
            }
        }
    }
};