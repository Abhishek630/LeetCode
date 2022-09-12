class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score =0;
        int n = tokens.size();
        int start = 0;
        int end = n-1;
        int ans =0;
        sort(tokens.begin(), tokens.end());
        
        while(start<=end && (power>= tokens[start]|| score>0)){
            while(start<=end && power>=tokens[start]){
                score++;
                power-=tokens[start];
                start++;
            }
            ans= max(ans,score);
            
            if(start<=end && score>0){
                score--;
                power+=tokens[end];
                end--;
            }
        }
        return ans;
    }
};