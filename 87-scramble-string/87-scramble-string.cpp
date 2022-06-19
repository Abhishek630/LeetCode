class Solution {
public:
    unordered_map<string,int>map;
    
    bool isScramble(string s1, string s2) {
        if(s1.length()!= s2.length()){
            return false;
        }
        
        if(s1.length()==0 && s2.length()==0){
            return true;
        }
        
        return solve(s1,s2);
    }
    
    bool solve(string s1, string s2){
        if(s1.compare(s2)==0){
            return true;
        }
        
        if(s1.length()<=1){
            return false;
        }
        
        string temp = s1 + " " + s2;
         if(map.find(temp) != map.end()){
            return map[temp];
        }
        
        int n = s1.length();
        bool flag = false;
        
        for(int i=1; i<n;i++){
           if((solve(s1.substr(0,i),s2.substr(0,i)) && solve(s1.substr(i,n-i),s2.substr(i,n-i)))
            ||(solve(s1.substr(0,i),s2.substr(n-i,i)) && solve(s1.substr(i,n-i),s2.substr(0,n-i)))){
                flag = true;
                break;
            }
        }
        return map[temp]=flag;
    }
};