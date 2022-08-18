class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        int ans =0;
        unordered_map<int,int>mp;
        for(auto x : arr){
            mp[x]++;
        }
        int sum =0;
        
        priority_queue<int> pq;
        for(auto x :mp){
            sum =sum+x.second;
            pq.push(x.second);
        }
        while(sum>n/2){
            int out = pq.top();
            pq.pop();
            sum =sum-out;
            ans++;
        }
        
        while (!pq.empty()) {
        cout << '\t' << pq.top()<<endl;;
        pq.pop(); 
            
    }
        cout<<sum;
        return ans;
    }
};