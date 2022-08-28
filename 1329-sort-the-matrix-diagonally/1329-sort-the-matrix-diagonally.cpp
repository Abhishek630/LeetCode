class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        
        int row = mat.size();
        int col = mat[0].size();
        
        for(int i=0; i<row; i++){
            vector<int>v;
            for(int k=i , j=0; k<row && j<col;){
                v.push_back(mat[k][j]);
                k++;
                j++;
            }
                
            sort(v.begin(), v.end());
            int temp =0;
                
            for(int k=i, j=0;k<row && j<col;){
                mat[k++][j++] = v[temp++];
            }
        }
        
         for(int j=1; j<col-1; j++) {

            vector<int> temp;
            for(int k=j, i=0; i<row && k<col; ) 
                temp.push_back(mat[i++][k++]);
            
            sort(temp.begin(), temp.end());
            
            int tempi=0;

            for(int k=j, i=0; i<row && k<col; )
                mat[i++][k++] = temp[tempi++];
        }
        return mat;
    }
};