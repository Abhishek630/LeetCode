class Solution {
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1){
            return -1;
        }
        vector<int> adj[n];
        for(int i = 0;i<connections.size();i++){
            adj[connections[i][1]].push_back(connections[i][0]);   
            adj[connections[i][0]].push_back(connections[i][1]);
        }
        vector<bool>visited(n,false);
        int count = -1;
        for(int i = 0;i<n;i++){
            if(visited[i] == false){
                BFS(adj,i,visited);
                count++;
            }
        }
        return count;
        
        
        // vector<bool>visited(n,false);
        // int count =0;
        // for(int i=0;i<n;i++){
        //     if(visited[i]==false){
        //         count++;
        //         BFS(connections,i,visited);
        //     }
        // }
        // return count-1;
    }
    
    void BFS(vector<int> adj[], int s,vector<bool>& visited){
        queue<int>q;
        visited[s]= true;
        q.push(s);
        
        while(!q.empty()){
            int u = q.front();
            q.pop();
            
            for(auto i: adj[u]){
                if(visited[i]==false){
                    visited[i]= true;
                    q.push(i);
                }
            }
        }
    }
};