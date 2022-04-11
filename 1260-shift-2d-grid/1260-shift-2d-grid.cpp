class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        
        vector<vector<int>>ans(m,vector<int>(n,0));
        
        for(int i=0;i<m;i++){
            for(int j=0; j<n ;j++){
                int one_D = i*n+j;
                int shift = (one_D +k)%(m*n);
                ans[shift/n][shift%n] = grid[i][j];
            }
        }
        return ans;
    }
};