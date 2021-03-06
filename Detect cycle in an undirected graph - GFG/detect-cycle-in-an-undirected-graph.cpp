// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    // bool isCycle(int V, vector<int> adj[]) {
    //     // Code here
    //     vector<bool>vis(V, false);
    //     for(int i=0; i<V; i++){
    //         if(vis[i]==false){
    //             if(isCycleRec(adj,vis,i,-1)){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    bool isCycle(int V, vector<int> adj[]) {
        vector<int>vis(V,0);
        for(int i=0;i<V;i++)
        {
            if(vis[i]==false)
            {
             if(dfs(i,-1,vis,adj))
            {
            return true;
            }
            }
        }
        return false;
        
    }
    
    // bool isCycleRec(vector<int> adj[], vector<bool> &vis, int source, int parent){
    //     vis[source]= true;
    //     for(auto u :adj[source]){
    //         if(vis[u]==false){
    //             if(isCycleRec(adj,vis,u,source)){
    //                 return true;
    //             }
    //             else if(u!= parent){
    //                 return true;
    //             }
    //         }
    //     }
    //     return false;
    // }
    bool dfs(int i,int parent,vector<int>&vis,vector<int>adj[])
    {
        vis[i]=true;
        for(auto it:adj[i])
        {
            if(vis[it]==false)
            {
                if(dfs(it,i,vis,adj))
                {
                    return true;
                }
            }else if(it!=parent){
                return true;
            }
        }
        return false;
    }

};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends