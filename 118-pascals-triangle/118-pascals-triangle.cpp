class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
         ans.push_back({1});
        if(numRows==1){
            return ans;
            ;
        }
        
        for(int i=1; i<numRows; i++){
            vector<int>res;
            for(int j =0; j<=i;j++){
                if(j==0 || j==i){
                res.push_back(1);
                }
                else{
                    // int a = res[i-1].push_back(j-1);
                    // int b = res[i-1].push_back(j);
                    // ans.push_back(res[i-1].push_back(ans)+res[i-1].push_back(j));
                    res.push_back(ans[i-1][j-1]+ ans[i-1][j]);
                }
            }
            ans.push_back(res);
        }
        return ans;
    }
};