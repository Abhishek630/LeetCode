class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> vec(n + 1);
        for(int i = 1; i < n + 1; ++i)
            vec[i] = INT_MAX;
        unordered_map<int, vector<pair<int, int>>> graph;
        for(int i = 0; i < times.size(); ++i)
            graph[times[i][0]].push_back({times[i][1], times[i][2]});
        vec[k] = 0;
        queue<pair<int, int>> q;
        q.push({0, k});
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            for(int i = 0; i < graph[temp.second].size(); ++i){
                auto p = graph[temp.second][i];
                if(temp.first + p.second < vec[p.first]){
                    vec[p.first] = temp.first + p.second;
                    q.push({temp.first + p.second, p.first});
                }
            }
        }
        int val = 0;
        for(int i = 0; i < vec.size(); ++i){
            if(vec[i] == INT_MAX)
                return -1;
            else
                val = max(val, vec[i]);
        }
        return val;
    }
};