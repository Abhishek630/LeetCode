class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        for(int i=0;i<rows;i++){
            int s =0;
            int e = cols-1;
            
            while(s<=e){
                int mid = s+(e-s)/2;
                
                if(matrix[i][mid]== target){
                    return true;
                }
                else if(matrix[i][mid]< target){
                    s = mid+1;
                }
                else{
                    e = mid-1;
                }
            }
        }
        return false;
        
    }
};