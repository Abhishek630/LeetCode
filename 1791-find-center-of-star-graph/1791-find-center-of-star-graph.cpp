class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        vector<int>deg(n+2,0);
        for (auto x :edges){
            deg[x[0]]++;
            deg[x[1]]++;
        }
        
      for(int i=0; i<deg.size(); i++){
          if(deg[i]== n){
              return i;
          }
      }
       return 0; 
    }
};