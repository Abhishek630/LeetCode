class Solution {
    private int [][] dir = new int [][] {{0,1},{0,-1},{-1,0},{1,0}};
    public int shortestPath(int[][] grid, int k) {
        int m = grid.length;
        int n = grid[0].length;
        
        int [][] obstacle = new int[m][n];
        boolean vis [][] = new boolean[m][n];
        Queue<int[]>q = new LinkedList<>();
        
        q.add(new int[]{0,0,grid[0][0]});
        obstacle[0][0]= grid[0][0];
        
        int count =1;
        
        while(!q.isEmpty()){
            int size = q.size();
            for(int i=0;i<size;i++){
                int [] head = q.poll();
                if(head[0]==m-1 && head[1]==n-1){
                    return count-1;
                }
                
                int currObstacleCount = head[2];
                for(int[] d:dir){
                    int x = head[0]+ d[0];
                    int y = head[1] +d[1];
                    if(!(x>=0 && y>=0 && x<m && y<n)){
                        continue;
                    }
                    int oldObstacleCount = obstacle[x][y];
                    int newObstacleCount = currObstacleCount +grid[x][y];
                    
                    if((!vis[x][y]) && newObstacleCount <=k){
                        q.add(new int[]{x,y,newObstacleCount});
                        obstacle[x][y]= newObstacleCount;
                        vis[x][y]= true;
                    }
                    
                    if(oldObstacleCount>newObstacleCount && newObstacleCount<=k){
                        q.add(new int[]{x,y,newObstacleCount});
                        obstacle[x][y]= newObstacleCount;
                        vis[x][y]= true;
                    }
                }
            }
            count++;
        }
        return -1;
    }
}