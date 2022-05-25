class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        int n = numCourses;
        vector<bool>vis(n,false);
        vector<bool>currVis(n,false);
        
        vector<int>adj[n];
        for(auto x :prerequisites){
            vector<int>data =x;
            int a = data[0];
            int b = data[1];
            adj[a].push_back(b);
        }
        
        for(int i=0; i<n ;i++){
            if(!vis[i]){
                if(dfsRec(vis,currVis, adj,i)){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool dfsRec(vector<bool>&vis,vector<bool>&currVis, vector<int>adj[],int src){
        vis[src]=true;
        currVis[src]= true;
        
        for(auto x: adj[src]){
            if(!vis[x]){
                if(dfsRec(vis,currVis,adj,x)){
                    return true;
                }
            }
            else if(vis[x] && currVis[x]){
                return true;
            }
        }
        currVis[src]=false;
        return false;
    }
};