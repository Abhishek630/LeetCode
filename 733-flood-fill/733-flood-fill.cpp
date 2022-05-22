class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int m = image.size();
        int n = image[0].size();
        
        if(image[sr][sc]== newColor){
            return image;
        }
        int source = image[sr][sc];
        dfs(image, sr,sc, newColor, m,n,source);
        return image;
    }
    
    
    void dfs(vector<vector<int>>& image, int sr, int sc, int newColor, int m, int n , int source){
        if(sr<0 || sc<0 || sr>=m || sc>=n){
            return;
        }
        else if(image[sr][sc]!= source){
            return;
        }
        
        image[sr][sc]=newColor;
        dfs(image, sr-1,sc,newColor,m,n,source);
        dfs(image, sr+1,sc,newColor,m,n,source);
        dfs(image, sr,sc+1,newColor,m,n,source);
        dfs(image, sr,sc-1,newColor,m,n,source);
    }
};