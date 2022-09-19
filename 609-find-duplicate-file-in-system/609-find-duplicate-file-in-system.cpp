class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
        
        unordered_map<string , vector<string>> mp;
        
        vector<vector<string>> res;
        
        for(auto x : paths) {
            int space = x.find(" ");
            string dir = x.substr(0 , space);
            
            string path = x.substr(space + 1);
            string file = "";
            string content , filename;
            string dir_file = "";
            for(int i = 0 ; i < path.length() ; i++) {
                if(path[i] == '(') {
                    content = "";
                    i++;
                    while(path[i] != ')') {
                        content += path[i];
                        i++;
                    }
                }
                else if(path[i] == ' ') {
                    dir_file = "";
                    
                    dir_file += dir;
                    dir_file += "/";
                    dir_file += filename;
                    
                    mp[content].push_back(dir_file);
                    filename = "";
                }
                else
                    filename += path[i];
            }
            dir_file = "";
                    
            dir_file += dir;
            dir_file += "/";
            dir_file += filename;
            mp[content].push_back(dir_file);
        }
        
        
        for(auto itr = mp.begin() ; itr != mp.end() ; itr++) {
            
            if(itr->second.size() > 1) {
                vector<string> r(itr->second.begin() , itr->second.end());
                res.push_back(r);
            }
            
        }
        
        return res;
    }
};