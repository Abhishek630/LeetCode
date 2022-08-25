class Solution {
    int count = 0;
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<pair<int,int>> adj[n];  
        vector<bool>vis(n,false);
         for(auto x : connections) {
            adj[x[0]].push_back({x[1],0});
            adj[x[1]].push_back({x[0],1});
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(adj,vis,i);
            }
        }
        return n-1-count;
    }
    
   void dfs(vector<pair<int,int>> adj[],vector<bool>&vis, int src){
       vis[src]= true;
       
       for(auto x: adj[src]){
           if(!vis[x.first]){
               count += x.second;
               dfs(adj,vis,x.first);
           }
       }
   }
};