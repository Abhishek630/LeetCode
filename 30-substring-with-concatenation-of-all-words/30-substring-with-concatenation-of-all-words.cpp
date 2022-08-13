class Solution {
    int wordLen;
    int no_of_words;
    int subStringLen;
    int s_size;
    unordered_map<string , int> wordCount;
public:
    
    void slide(int left , string s , vector<int>& ans) {
        
        unordered_map<string , int> wordFound;
        
        int wordUsed = 0;
        
        bool excessWord = false;
        
        for(int right = left ; right <= s_size - wordLen ; right += wordLen) {
            
            string sub = s.substr(right , wordLen);
            
            if(wordCount.find(sub) == wordCount.end()) {
                wordFound.clear();
                wordUsed = 0;
                excessWord = false;
                left = right + wordLen;
            }
            else {
                
                while(right - left == subStringLen || excessWord) {
                    
                    string leftWord = s.substr(left , wordLen);
                    left = left + wordLen;
                    
                    wordFound[leftWord]--;
                    
                    if(wordFound[leftWord] >= wordCount[leftWord]) {
                        excessWord = false;
                    }
                    else
                        wordUsed--;
                    
                }
                
                wordFound[sub]++;
                
                if(wordFound[sub] <= wordCount[sub]) {
                    wordUsed++;
                }
                else
                    excessWord = true;
                
                if(wordUsed == no_of_words && !excessWord) {
                    ans.push_back(left);
                }
                
            }
            
        }
        
    }
    
    vector<int> findSubstring(string s, vector<string>& words) {
        
        for(auto x : words)
            wordCount[x]++;
        
        wordLen = words[0].size();
        no_of_words = words.size();
        subStringLen = wordLen * no_of_words;
        
        s_size = s.length();
        
        vector<int> index;
        
        for(int i=0;i<wordLen;i++) {
            slide(i , s , index);
        }
        
        return index;
        
    }
};