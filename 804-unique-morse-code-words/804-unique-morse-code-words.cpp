class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string>morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string, int>mp;
        
        for(auto word :words){
            string str ="";
            for(auto ch : word){
                str += morse[ch-'a'];
            }
            mp[str]++;
        }
        
        return mp.size();
    }
};