class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>>res;
        vector<bool>vis(n);
        vector<int>output;
        solve(nums, vis, res, output);
        for(auto x :res){
            ans.push_back(x);
        }
        return ans;
    }
    
    
    void solve(vector<int>& nums,vector<bool>&vis,set<vector<int>>&res,vector<int>&output){
        if(output.size()== nums.size()){
            res.insert(output);
        }
        
        for(int i=0;i<nums.size();i++){
            if(!vis[i]){
                output.push_back(nums[i]);
                vis[i]= true;
                solve(nums,vis,res,output);
                vis[i]=false;
                output.pop_back();
            }
        }
    }
};