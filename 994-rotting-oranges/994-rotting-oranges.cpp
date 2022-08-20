struct node{
    int x, y, time;
    
    node(int _x, int _y, int _time){
        x =_x;
        y= _y;
        time = _time;
    }
};

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
        
        int oranges =0;
        queue<node>q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push(node(i,j,0));
                }
                if(grid[i][j]!=0){
                    oranges++;
                }
            }
        }
        
        int cnt =0;
        int ans =0;
        while(!q.empty()){
            int size = q.size();
            
            for(int i=0;i<size;i++){
                int x = q.front().x;
                int y = q.front().y;
                int time = q.front().time;
                q.pop();
                cnt++;
                
                ans = max(ans,time);
                int ax[4]={1,0,-1,0};
                int ay[4]={0,1,0,-1};
                
                for(int i=0;i<4;i++){
                    int newX = ax[i]+x;
                    int newY = ay[i]+y;
                    
                    if(isValid(newX,newY,n,m,grid)){
                        grid[newX][newY]=2;
                        q.push(node(newX,newY,time+1));

                    }
                }
            }
        }
        if(oranges == cnt){
            return ans;
        }
        return -1;
    }
};