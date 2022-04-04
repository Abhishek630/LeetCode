class Solution {
    public int solve(ArrayList<Integer>arr) {
        int n = arr.size();
        // int [] dp = new int[n+1];
        
        
        //Bases cases;
        int prev=0;
        int prev2 =0;
        for(int i=0;i<n;i++){
            int pick = arr.get(i);
            if(i>1){
                pick = pick+prev2;
            }
            int notpick = prev;
            int curi= Math.max(pick,notpick);
            prev2 =prev;
            prev =curi;
        }
        return prev;
    }
    public int rob(int[] nums) {
        int n = nums.length;
        if(n==1){
            return nums[0];
        }
        ArrayList<Integer> ans1 = new ArrayList<Integer>();
        ArrayList<Integer> ans2 = new ArrayList<Integer>();
        for(int i=0; i<n;i++){
            if(i!=0){
                ans1.add(nums[i]);
            }
            if(i!=n-1){
                ans2.add(nums[i]);
            }
        }
        return Math.max(solve(ans1),solve(ans2));
    }
}