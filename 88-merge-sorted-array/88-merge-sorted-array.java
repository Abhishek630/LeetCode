class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
         while(i>=0 && j>=0){
             if(nums1[i] <nums2[j]){
                 nums1[k]=nums2[j];
                 j--;
                 k--;
             }
             else{
                 nums1[k] = nums1[i];
                 i--;
                 k--;
             }
         }
        while(j>=0){
            nums1[k]= nums2[j];
            j--;
            k--;
        }
        
        while(i>=0){
            nums1[k]= nums1[i];
            i--;
            k--;
        }
//         int pointer1 = m-1, pointer2 = n-1,index = m+n-1;
//         while(pointer2 >= 0)
//         {
//             if(pointer1 >= 0 && nums1[pointer1] > nums2[pointer2])
//             {
//                 nums1[index--] = nums1[pointer1--];
//             }
//             else
//             {
//                 nums1[index--] = nums2[pointer2--];
//             }
//         }
        
    }
}