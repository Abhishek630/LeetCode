class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        int n = nums.size();
        vector<int>count(n+1,0);
        
        for(int i=0; i<n; i++){
            count[nums[i]]++;
        }
        
        for(int i=0;i<=n;i++){
            if(count[i]==0){
                ans=i;
            }
        }
        return ans;
    }
};