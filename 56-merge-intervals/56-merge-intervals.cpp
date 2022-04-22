class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        // edge case
        // when nothing is given as in[ut.]
        if(intervals.size()==0){
            return ans;
        }
        
        sort(intervals.begin(), intervals.end());
        
        vector<int> res = intervals[0];
        
        for(auto it : intervals){
             if(it[0] <= res[1]){
                 res[1]= max(it[1], res[1]);     
             }
            else{
                ans.push_back(res);
                res =it;
            }
        }
        
        ans.push_back(res);
        return ans;
    }
};