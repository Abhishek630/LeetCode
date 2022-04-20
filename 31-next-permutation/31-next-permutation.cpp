class Solution {
public:
    void nextPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int k,l;
        
//         for(k =n-2; k>=0; k--){
//             if(nums[k] < nums[k+1]){
//                 break;
//             }
//         }
        
//         if(k<0){
//             reverse(nums.begin(), nums.end());
//         }
//         else{
//             for(l =n-1 ; l> k ;l--){
//                 if(nums[l]>nums[k]){
//                     break;
//                 }
//             }
//         }
//         swap(nums[l], nums[k]);
//         reverse(nums.begin()+k+1, nums.end());
         int n=nums.size(), ind1, ind2;
        
        for(ind1=n-2; ind1>=0; ind1--)
        {
            if(nums[ind1]<nums[ind1+1]) break;
        }
        if(ind1<0)
        {
            sort(nums.begin(), nums.end());
        }
        else
        {
            for(ind2=n-1; ind2>ind1; ind2--)
            {
                if(nums[ind2]>nums[ind1]) break;
            }
            swap(nums[ind1], nums[ind2]);
            reverse(nums.begin()+ind1+1, nums.end());
        }
    }
};