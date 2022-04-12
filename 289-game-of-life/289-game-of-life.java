class Solution {
    private int[][]directions = new int [][]{{0,1},{1,0},{-1,0},{0,-1},{-1,-1},{1,1},{1,-1},{-1,1}};
    
    public void gameOfLife(int[][] board) {
        int m = board.length;
        int n = board[0].length;
        
        for(int i=0; i<m ;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    int activeNeighbour = active(board, i,j);
                    if(activeNeighbour<2 || activeNeighbour>3){
                        board[i][j] =-2;
                    }
                }
                else if(board[i][j]==0){
                    int activeNeighbour = active(board,i,j);
                    if(activeNeighbour ==3){
                        board[i][j]=3;
                    }
                }
            }
        }
        updateBoard(board);
        return;
    }
        
       void updateBoard( int[][]board){
          int m = board.length;
          int n = board[0].length;
           
           for(int i=0;i<m;i++){
               for(int j=0;j<n;j++){
                   if(board[i][j]==-2){
                       board[i][j]=0;
                   }
                   else if(board[i][j]==3){
                       board[i][j]=1;
                   }
               }
           }
       } 
    
    private int active(int[][] board ,int row, int col){
             int m = board.length;
          int n = board[0].length;
        int activeNeigh =0;
        for(int [] direction : directions){
            int newRow = row+direction[0];
            int newCol = col + direction[1];
                
            if(newRow>=0 && newRow<m && newCol>=0 && newCol<n  && (board[newRow][newCol]==1 || board[newRow][newCol]==-2)){
                activeNeigh++;
            }    
        }
        return activeNeigh;
    }
}