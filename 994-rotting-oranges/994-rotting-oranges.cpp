class Solution {
public:
    
    bool isValid(int i, int j, int n, int m,vector<vector<int>>& grid){
            if(i>=0 && i<n && j>=0 && j<m  && grid[i][j]==1){
                return true;
            }
            return false;
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        
        int fresh =0;
        int time =0;
        queue<pair<int,int>>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        
        while(!q.empty()){
            int size = q.size();
            int temp =0;
            
            for(int i=0;i<size;i++){
                pair<int,int>p = q.front();
                q.pop();
                
                int x1= p.first;
                int y1= p.second;
                
                int ax[4]={1,0,-1,0};
                int ay[4]={0,1,0,-1};
                
                for(int i=0;i<4;i++){
                    int x = ax[i]+x1;
                    int y = ay[i]+y1;
                    
                    if(isValid(x,y,n,m,grid)){
                        grid[x][y]=2;
                        q.push({x,y});
                        temp++;
                    }
                }
            }
            if(temp!=0){
                time++;
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    time=0;
                    return -1;
                }
            }
        }
        
       
        
        return time;
    }
};