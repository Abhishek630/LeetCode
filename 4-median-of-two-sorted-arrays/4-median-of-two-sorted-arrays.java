class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        
        int m = nums1.length;
        int n = nums2.length;
        
        int arr[] = new int[m+n];
        
        int i=0;
        int j=0;
        int k=0;
        
        while(i<m && j<n){
            if(nums1[i]>=nums2[j]){
                arr[k++]= nums2[j++];
            }
            else{
                arr[k++]= nums1[i++];
            }
        }
        
        while(i<m){
            arr[k++]= nums1[i++];
        }
        
        while(j<n){
            arr[k++]= nums2[j++];
        }
        
        int l = m+n;
        
        if(l%2==0){
            int sum = arr[(l-1)/2]+arr[(l-1)/2+1];
            double val = sum/2.0;
            return val;
        }
        else{
            double sum = arr[(l-1)/2];
            return sum;
        }
        
    }
}