class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        int ans =0;
        if(startFuel == target){
            return 0;
        }
        int n = stations.size();
        int index =0;
        
        priority_queue<int> pq;
        while(startFuel<target){
            while(index<n && stations[index][0]<=startFuel){
                pq.push(stations[index][1]);
                index++;
            }    
            if(pq.empty()){
                return -1;
            }
            
            startFuel += +pq.top();
            pq.pop();
            ans++;
        }
        return ans;
    }
};