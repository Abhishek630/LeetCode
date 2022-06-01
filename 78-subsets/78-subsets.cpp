class Solution {
private:
   void solve(vector<int> nums,vector<vector<int>>&ans, vector<int> output, int index){
        if(index==nums.size()){
            ans.push_back(output);
            return;
        }
        
        
       // int element = nums[index];
        output.push_back(nums[index]);
        solve(nums, ans, output, index+1);
         output.pop_back();
        solve(nums, ans, output, index+1);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int> output;
        int index =0;
        solve(nums, ans, output, index);
        return ans;
        
    }
};