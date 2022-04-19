class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> ans = new ArrayList<>();
        
        ans.add(Arrays.asList(1));
        if(numRows ==1){
            return ans;
        }
        
        for(int i=1;i<numRows;i++){
            List<Integer> arr = new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    arr.add(1);
                }
                else{
                    int a = ans.get(i-1).get(j-1);
                    int b = ans.get(i-1).get(j);
                    arr.add(a+b);
                }
            }
            ans.add(arr);
        }
        return ans;
    }
}