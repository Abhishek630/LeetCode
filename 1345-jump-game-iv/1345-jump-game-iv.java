class Solution {
    public int minJumps(int[] arr) {
        
        Map<Integer,List<Integer>>map = new HashMap<>();
        for(int i=0;i<arr.length;i++){
			List<Integer> indices = map.getOrDefault(arr[i], new ArrayList<>());
			indices.add(i);
			map.put(arr[i], indices);
		}
        boolean [] vis= new boolean [arr.length];
        Queue<Integer>q = new LinkedList<>();
        int count =0;
        q.add(0);
        
        while(!q.isEmpty()){
            int size = q.size();
            while(size-->0){
                int head = q.poll();
                if(head == arr.length-1){
                    return count;
                }
                
                
                if(head<0 || head>=arr.length|| vis[head]){
                    continue;
                }
                
                if(head-1>0 && !vis[head-1]){
                    q.add(head-1);
                }
                
                if(head+1>0 && !vis[head+1]){
                    q.add(head+1);
                }
                  
                if(map.containsKey(arr[head])){
					for(int index : map.get(arr[head])){
						if(index>=0 && index<arr.length && !vis[index]){
							q.offer(index);
						}
					}
					map.remove(arr[head]);
				}
                vis[head]= true;
            }
            count++;
        }
        return -1;
    }
}