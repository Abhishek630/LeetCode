class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_set<int> uq;
        set<vector<int>> ans;
        for(auto x : nums) {
            uq.insert(x);
        }
        int count =0;
        
        int n = nums.size();
        
        for(int i=0;i<n; i++) {
            
            if(uq.find(nums[i] + diff) != uq.end() && uq.find(nums[i] + 2*diff) != uq.end())
                // ans.insert({nums[i] , nums[i] + diff , nums[i] + 2*diff});
                count++;
            
        }
        
        return count;
    }
};