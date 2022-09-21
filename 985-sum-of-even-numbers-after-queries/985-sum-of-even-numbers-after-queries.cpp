
class Solution {
public:
//     TC: O(queries.size()) SC:O(queries.size())

    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        
        int evenSum = 0;
        vector<int> ans;
        
        // Calculate the initial evenSum
        for(int num: nums){
            evenSum += num % 2 == 0 ? num : 0;
        }
        
        // for each queries
        for(auto v: queries){
            int val = v[0], index = v[1];
            
            int previousNum = nums[index];
            
            if((previousNum & 1) == 0){
                // even case
                int updatedNum = nums[index] + val;
                
                nums[index] = updatedNum;
                
                if((updatedNum & 1) == 0) evenSum = evenSum - previousNum + updatedNum;
                
                else evenSum = evenSum - previousNum;
               
            }else{
                // odd case
                int updatedNum = nums[index] + val;

                nums[index] = updatedNum;
                
                if((updatedNum & 1) == 0) evenSum = evenSum + updatedNum;
            }

            ans.push_back(evenSum);

        }
        
        if(ans.size() > 0) return ans;
        
        return {0};
    }
};
