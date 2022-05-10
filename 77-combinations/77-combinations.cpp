class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>>ans;
        vector<int> output;
        solve(k,n, ans,output);
        return ans;
    }
    
    void solve(int k, int n , vector<vector<int>> &ans, vector<int>&output){
        if(k==0){
            ans.push_back(output);
            return;
        }
        if(n<1){
            return;
        }
        output.push_back(n);
        solve(k-1,n-1,ans,output);
        output.pop_back();
        solve(k,n-1,ans,output);
    }
};