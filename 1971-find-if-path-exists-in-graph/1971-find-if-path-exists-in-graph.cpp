class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<int> adj[n];
        for(int i = 0;i<edges.size();i++){
            adj[edges[i][1]].push_back(edges[i][0]);   
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        queue<int>q;
        vector<bool>visited(n,false);
        visited[source]= true;
        q.push(source);
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            if(u== destination){
                return true;
            }
            
            
            for(auto i :adj[u]){
                if(visited[i]==false){
                    visited[i]= true;
                    q.push(i);
                }
            }
        }
        
        return false;
    }
};