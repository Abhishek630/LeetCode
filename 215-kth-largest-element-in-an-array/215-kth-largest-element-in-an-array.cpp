class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        
         priority_queue <int, vector<int>, greater<int> > pq;
        // priority_queue <int> pq;
        
        for(int i=0; i<n; i++){
            pq.push(nums[i]);

        
        // for(int i=k; i<n; i++){
        //     if(nums[i]>pq.top()){
        //         pq.pop();
        //         pq.push(nums[i]);
        //     }
        // }
        
        if(pq.size()>k){
            pq.pop();
        }
        }
        return pq.top();
    }
};