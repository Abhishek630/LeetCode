class Solution {
    public void setZeroes(int[][] matrix) {
        // ArrayList<Integer> row = new ArrayList<>();
        // ArrayList<Integer> col = new ArrayList<>();
    
        int rows = matrix.length;
        int cols = matrix[0].length;
        
        int [] row = new int[rows];
        int [] col = new int[cols];
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
                if (matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                    // row.set(i,0);
                    // col.set(j,0);
                }
            }
        }
        
        for(int i=0; i<rows; i++){
            for(int j=0; j<cols; j++){
              if(row[i]==1 || col[j]==1){
                  matrix[i][j] =0;
              }
            }
        }
    }
}