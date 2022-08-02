class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int n = timeSeries.size();
        int ans =duration;
        for(int i=0;i<n-1;i++){
            if(timeSeries[i]+duration<timeSeries[i+1]){
                ans= ans+duration;
            }
            else{ 
                ans= ans+ (timeSeries[i+1]- timeSeries[i]);
            }
        }
        return ans;
    }
};