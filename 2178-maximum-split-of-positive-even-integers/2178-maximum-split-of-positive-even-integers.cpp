class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> ans;
        if(finalSum%2  !=0){
            return ans;
        }
        
        long long i =2;
        while(i<= finalSum){
            ans.push_back(i);
            finalSum = finalSum-i;
            i=i+2;
        }
        ans[ans.size()-1] += finalSum;
        return ans;
    }
};