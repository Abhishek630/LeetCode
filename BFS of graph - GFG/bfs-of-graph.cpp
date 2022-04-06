// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // vector<int> ans;
        // vector<int> vis(V,0);
        // queue<int> q;
        
        // q.push(0);
        // vis[0]=1;
        
        // while(!q.empty()){
        //     int x=q.front();
        //     ans.push_back(x);
        //     q.pop();
        //     for(auto i:adj[x]){
        //         if(!vis[i]){
        //             vis[i]=1;
        //             q.push(i);
        //         }
        //     }
        // }
        // return ans;
        vector<int>ans;
        vector<int> visited (V, false);
        queue<int>q;
        int s =0;
        visited[s]= true;
        q.push(s);
        
        while(!q.empty()){
            int u = q.front();
            ans.push_back(u);
            q.pop();
            
            for(auto v:adj[u]){
                if(visited[v]== false){
                    visited[v]= true;
                    q.push(v);
                }
            }
        }
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends