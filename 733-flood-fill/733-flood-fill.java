class Solution {
    public void dfs(int[][] image, int sr, int sc, int newColor, int rows, int cols ,int source){
        if(sr<0||sc<0||sr>=rows|| sc>=cols){
            return;
        }
        if(image[sr][sc]!=source){
            return;
        }
        image[sr][sc] = newColor;
        dfs(image, sr+1,sc, newColor,rows, cols, source);
        dfs(image, sr-1,sc, newColor,rows, cols, source);
        dfs(image, sr,sc+1, newColor,rows, cols, source);
        dfs(image, sr,sc-1, newColor,rows, cols, source);
    }
    
    public int[][] floodFill(int[][] image, int sr, int sc, int newColor) {
        
        if(image[sr][sc]== newColor){
            return image;
        }
        int rows = image.length;
        int cols = image[0].length;
        int source = image[sr][sc];
        dfs(image, sr,sc, newColor,rows, cols, source);
        return image;
        
    }
}