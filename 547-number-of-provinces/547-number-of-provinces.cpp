class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        
        int n = isConnected.size();
        vector<bool>vis(n,false);
        int count =0;
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                DFS(isConnected, vis, n,i);
                    count++;
            }
        }
        return count;
    }
    
    void DFS(vector<vector<int>>& isConnected, vector<bool>& vis, int n , int s){
        vis[s]= true;
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            int x= isConnected[s][i];
            if(x==1){
                ans.push_back(i);
            }
        }
        
        for(auto i: ans){
            if(!vis[i]){
                DFS(isConnected,vis,n,i);
            }
        }
    }
};