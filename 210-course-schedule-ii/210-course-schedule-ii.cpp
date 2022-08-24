class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int>indegree(numCourses,0);
        
        vector<bool> vis(numCourses,false);
        vector<bool> currVis(numCourses, false);
        vector<int>adj[numCourses];
        for(auto x: prerequisites){
            adj[x[1]].push_back(x[0]);
            indegree[x[0]]++;
        }
        
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfsRec(vis,currVis,adj,i)){
                    return {};
                }
            }
        }
        return topo(adj,indegree);
    }
    
    bool dfsRec(vector<bool> &vis,vector<bool> &currVis,vector<int>adj[],int src){
        vis[src]=true;
        currVis[src]=true;
        for(auto x:adj[src]){
            if(!vis[x]){
                if(dfsRec(vis,currVis,adj,x)){
                    return true;
                }
            }
             else if(currVis[x] && vis[x]){
                    return true;
                }
        }
        currVis[src]=false;
        return false;
    }
    
    vector<int> topo(vector<int>adj[], vector<int>indegree){
        
        queue<int>q;
        vector<int>ans;
        
        for(int i=0; i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            ans.push_back(q.front());
            int front =q.front();
            q.pop();
            for(auto x:adj[front]){
                indegree[x]--;
                if(indegree[x]==0){
                    q.push(x);
                }
            }
        }
        return ans;
    }
};
