class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> maxHeap;
        int ans=0;
        
        for(int i=0;i<n;i++){
            maxHeap.push(stones[i]);
        }
        
        while(true){
            if(maxHeap.size()==0 || maxHeap.size()==1){
                break;
            }
            int n1= maxHeap.top();
            maxHeap.pop();
            int n2 = maxHeap.top();
            maxHeap.pop();
        
            if(n1==n2){
            maxHeap.push(0);
            }
            else if(n1!=n2){
            maxHeap.push(n1-n2);
            }
        }
          if(maxHeap.size()) ans = maxHeap.top();
        return ans;
    }
};