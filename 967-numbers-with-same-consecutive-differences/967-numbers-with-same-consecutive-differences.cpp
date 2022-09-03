class Solution {
public:
    vector<int>res;    
    vector<int> numsSameConsecDiff(int n, int k) {
        
     
        for(int i=1; i<=9;i++){
            DFS(n,i,1,k,i);
        }
        return res;
    }
    
    void DFS(int n, int num, int count, int k, int digit){
        if(n==count){
            res.push_back(num);
            return;
        }
        if(k==0)DFS(n, 10*num+(digit), count+1, k, (10*num+(digit))%10);
        else{
            if(digit+k<=9)DFS(n, 10*num+(digit+k), count+1, k, (10*num+(digit+k))%10);
            if(digit-k>=0)DFS(n, 10*num+(digit-k), count+1, k, (10*num+(digit-k))%10);
        }
    }
};