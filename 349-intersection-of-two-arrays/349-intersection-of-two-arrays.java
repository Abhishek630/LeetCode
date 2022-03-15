class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;
        
        HashSet<Integer> h = new HashSet<Integer>();
        for(int i=0;i<n1;i++){
            h.add(nums1[i]);
        }
        
        List<Integer> res = new ArrayList<Integer>();
        for(int i=0;i<n2;i++){
            if(h.contains(nums2[i])){
                h.remove(nums2[i]);
                res.add(nums2[i]);
            }
        }
        int [] ans = new int[res.size()];
        for(int i=0;i<res.size();i++){
            ans[i]=res.get(i);
        }
        return ans;
    
        
    }
}