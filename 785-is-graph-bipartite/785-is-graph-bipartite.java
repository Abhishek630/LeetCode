class Solution {
    public boolean isBipartite(int[][] graph) {
        
        int len = graph.length;
        int[] color = new int[len];
        Arrays.fill(color, -1);
        
        for(int i=0;i<len;i++){
            if(color[i] == -1){
                color[i]=1;
                if(!dfs(i,graph,color)){
                    return false;
                }
            }
        }
        return true;
    }
        
        private  boolean dfs( int index, int[][] graph, int[] color){
            int currentColor = color[index];
            
            for(int i: graph[index]){
                if(color[i]== currentColor){
                    return false;
                }
                if(color[i]== -1){
                    color[i] = 1-currentColor;
                    if(!dfs(i,graph,color)){
                    return false;
                   }
                
                }
            }
            return true;
        }
}       