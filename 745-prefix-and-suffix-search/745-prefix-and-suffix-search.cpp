class WordFilter {
public:
    unordered_map<string,unordered_map<string,int>> umap;
    WordFilter(vector<string>& words) {
        for(int j=0;j<words.size();j++)
        {
            
            string temp=words[j];
            int n1 = words[j].size(),n2=n1 ;
            vector<string> suff;
            suff.reserve(n1);
            while(n2--)
            {
                suff.push_back(words[j]);
                words[j].erase(words[j].begin());
            }
            while(n1--)
            {
             for(auto &x : suff)
                   umap[temp][x]=j+1;
                temp.pop_back();
            }
            
        }
    }
    
    int f(string prefix, string suffix) {
         return ((umap[prefix][suffix]==0)?-1:umap[prefix][suffix]-1);
    }
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */