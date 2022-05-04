struct Node{
    Node *links[2];
    
    bool containsKey(int ind){
        return (links[ind]!= NULL);
    }
    
    Node * get(int ind){
        return links[ind];
    }
    
    void put(int ind, Node* node){
        links[ind]= node;
    }
};

class Trie{
    private:
    Node *root;
    
    public:
    Trie(){
        root =  new Node();
    }
    
    void insert(int num){
        Node *node = root;
        for(int i=31; i>=0; i--){
            int bit = (num>>i)&1;
            if(!node->containsKey(bit)){
                node->put(bit,new Node());
            }
            node = node->get(bit);
        }
    }
    
    int getMax(int num){
        Node * node = root;
        int maxNum =0;
        for(int i=31; i>=0;i--){
            int bit = (num>>i) & 1;
            if(node->containsKey(1-bit)){
            maxNum = maxNum |(1<<i);
            node = node->get(1-bit);
            }
            else{
            node = node->get(bit);
            }
        }
        return maxNum; 
    }
};
class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        
        int n = nums.size();
        
        Trie trie;
        for(int i=0; i<n;i++){
            trie.insert(nums[i]);
        }
        int maxi =0;
        
        for(int i=0; i<n ;i++){
            maxi = max(maxi,trie.getMax(nums[i]));
        }
        return maxi;
    }
};