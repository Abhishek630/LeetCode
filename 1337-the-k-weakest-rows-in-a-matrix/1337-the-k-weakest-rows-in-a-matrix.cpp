class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int rows = mat.size();
        int cols = mat[0].size();
        vector<vector<int>> soldiers(max(rows,cols)+1);
        vector<int>ans;
        
        for(int row=0; row<rows ;row++){
            int totalSoldiers =0;
            for(int col =0; col<cols ;col++){
                if(mat[row][col]==1)
                totalSoldiers += mat[row][col];
            }
            soldiers[totalSoldiers].push_back(row);
        }
        
        for(int r=0; r<soldiers.size();r++){
            for(int c=0; c<soldiers[r].size();c++){
                if(k>0){
                    ans.push_back(soldiers[r][c]);
                    k--;
                }
            }
        }
        return ans;
    }
};