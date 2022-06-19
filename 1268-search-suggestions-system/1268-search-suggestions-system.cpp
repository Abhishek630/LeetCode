typedef struct _node {
    vector<_node*> children;
    bool isEnd;
    
    _node() {
        children = vector<_node*>(26);
        isEnd = false;
    }
} Node;

class Solution {
private:
    void DFS(Node *cur, vector<string>& res, string &curWord) {
        if(!cur || res.size() == 3) return;
        
        if(cur->isEnd) {
            res.push_back(curWord);
        }
        
        for(int i = 0; i < 26; i++) {
            curWord += ('a' + i);
            DFS(cur->children[i], res, curWord);
            curWord.pop_back();
        }
    }
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        vector<vector<string>> res(searchWord.length());
        Node *head = new Node();
        
        for(auto &p: products) {
            Node *cur = head;
            for(auto &c : p) {
                if(!cur->children[c - 'a']) {
                    cur->children[c - 'a'] = new Node();
                }
                cur = cur->children[c - 'a'];
            }
            cur->isEnd = true;
        }
        
        Node *cur = head;
        
        string curWord;
        for(int i = 0; i < searchWord.length(); i++) {
            cur = cur->children[searchWord[i] - 'a'];
            
            if(!cur) break;
            curWord += searchWord[i];
            
            DFS(cur, res[i], curWord);
        }
        
        return res;
    }
};