class Solution {
    public int minPathSum(int[][] grid) {
      return backtrack(grid, 0 , 0);
    }
    
     int backtrack(int[][] grid, int r, int c){
        if(r>= grid.length || c>=grid[0].length) return Integer.MAX_VALUE;
        if(r == grid.length - 1 && c == grid[0].length -1) return grid[r][c];
        if(grid[r][c] < 0) return -1*grid[r][c];
        int temp =  grid[r][c] + Math.min(backtrack(grid, r+1, c) ,  backtrack(grid, r, c+1));
        grid[r][c] = -1*temp;
        return temp;
         
     }
    
}