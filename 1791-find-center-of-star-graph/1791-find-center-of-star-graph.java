class Solution {
    public int findCenter(int[][] edges) {
        int n=edges.length;
    int degree[]=new int[edges.length+2];
    for(int a[]:edges){
    degree[a[0]]++;
    degree[a[1]]++;
    }
        for(int i=1;i<degree.length;i++){
            if(degree[i]==n){
                return i;
            }
        }
        return 0;
    }
}