class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        
        int V = graph.size();
        vector<bool>vis(V+1,false);
        vector<bool>dfsVis(V+1,false);
        vector<bool>present_cycle(V+1,false);
        vector<int>ans;
        
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                cycle(i, vis, dfsVis, graph, present_cycle);
                }
            }
        for(int i=0;i<V;i++){
            if(!present_cycle[i]){
                ans.push_back(i);
            }
        }
        return ans;
    }
    
    bool cycle(int src,vector<bool>&vis,vector<bool>&dfsVis, vector<vector<int>>& graph, vector<bool> &present_cycle) {
        
        vis[src]=true;
        dfsVis[src]= true;
        
        vector<int>data =graph[src];
        
        for(auto x:data){
            if(!vis[x]){
                if(cycle(x, vis,dfsVis,graph,present_cycle)){
                    return present_cycle[src]= true;
                }
            }
            else if(vis[x] && dfsVis[x]){
                return present_cycle[src]= true;
            }
        }
        dfsVis[src]=false;
        return false;
    }
};