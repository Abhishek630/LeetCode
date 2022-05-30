class Solution {
public:
    
    void dfs(int node, int parent, int timer, vector<int>&disc,vector<int> &low,                        vector<bool>&vis,vector<vector<int>>&result,vector<vector<int>>&adj){
        
        vis[node]=true;
        disc[node]=low[node]= timer++;
        
        for(auto nbr: adj[node]){
            if(nbr== parent){
                continue;
            }
            if(!vis[nbr]){
                dfs(nbr,node,timer,disc,low,vis,result,adj);
                low[node]= min(low[node], low[nbr]);
                
                if(low[nbr]>disc[node]){
                    vector<int>ans;
                    ans.push_back(nbr);
                    ans.push_back(node);
                    result.push_back(ans);
                }
            }
            else{
                low[node] = min(low[node],disc[nbr]);
            }
        }
    }
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        
        vector<vector<int>>adj(n);
        // for(int i=0; i<connections.size();i++){
        //     int u = connections[i][0];
        //     int v =connections[1][1];
        //     adj[u].push_back(v);
        //     adj[v].push_back(u);
        // }
        for(auto it : connections){
            adj[it[1]].push_back(it[0]);
            adj[it[0]].push_back(it[1]);
        }
        
        int timer =0;
        vector<int>disc(n,-1);
        vector<int>low(n,-1);
        int parent =-1;
        vector<bool>vis(n,false);
        
        //dfs
        
        vector<vector<int>>result;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,parent,timer,disc,low,vis,result,adj);
            }
        }
        return result;
    }
};