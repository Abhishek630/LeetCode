class DSU {
  vector<int> parent;
  public :   
    DSU() {
        for(int i = 0 ; i < 26 ; i++) {
            parent.push_back(i);
        }
    }
    
    int findPar(int ind) {
        if(parent[ind] == ind)
            return ind;
        return parent[ind] = findPar(parent[ind]);
    }
    
    void unionp(int a , int b) { // false if already a pair , true if made a pair
        int parA = findPar(a);
        int parB = findPar(b);
        
        if(parA == parB)
            return;
        
        parent[parA] = parB;
    }
    
};

class Solution {
public:
    bool equationsPossible(vector<string>& equations) {
        DSU dsu;
        for(auto x : equations) {
            if(x[1] == '=') {
                dsu.unionp(x[0] - 'a' , x[3] - 'a');
            }
        }
        
        
        for(auto x : equations) {
            if(x[1] == '!') {
                if(dsu.findPar(x[0] - 'a') == dsu.findPar(x[3] - 'a')) {
                    return false;
                }
            }
        }
        
        return true;
    }
};