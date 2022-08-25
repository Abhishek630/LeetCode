class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1){
            return -1;
        }
        vector<int> adj[n];
        // for(int i = 0;i<connections.size();i++){
        //     adj[connections[i][1]].push_back(connections[i][0]);   
        //     adj[connections[i][0]].push_back(connections[i][1]);
        // }
        for(auto x: connections){
            adj[x[1]].push_back(x[0]);   
            adj[x[0]].push_back(x[1]);   
        }
        vector<bool>visited(n,false);
        int count = 0;
        for(int i = 0;i<n;i++){
            if(visited[i] == false){
                DFS(adj,i,visited);
                count++;
            }
        }
        return count-1;
    }
    
    void DFS(vector<int> adj[], int src,vector<bool>& visited){
        // queue<int>q;
        visited[src]= true;
        // q.push(s);
        
//         while(!q.empty()){
//             int u = q.front();
//             q.pop();
            
            for(auto i: adj[src]){
                if(visited[i]==false){
                    visited[i]= true;
                    DFS(adj,i,visited);
                }
            }
        // }
    }
};