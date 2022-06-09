class Solution {
    public boolean canReach(int[] arr, int start) {
        int n = arr.length;
        
        Queue<Integer>q = new LinkedList<>();
        boolean[] vis = new boolean[n];
        
        q.add(start);
        while(!q.isEmpty()){
            int size = q.size();
            while(size-->0){
                Integer head = q.poll();
                if(arr[head]==0){
                    return true;
                }
                
                if(!vis[head]){
                    int forwardIndex = head +arr[head];
                    if(forwardIndex>=0 && forwardIndex <n){
                        q.add(forwardIndex);
                    }
                    
                    int backwardIndex = head-arr[head];
                    if(backwardIndex>=0 && backwardIndex <n){
                        q.add(backwardIndex);
                    }
                }
                vis[head]=true;
            }
        }
        return false;
    }
}