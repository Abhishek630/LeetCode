class Solution {
    public List<Integer> partitionLabels(String s) {
        List<Integer> ans = new ArrayList<Integer>();
        int [] endIndex = new int[26];
        for(int i=0; i<s.length(); i++){
            endIndex[s.charAt(i)-'a'] = i;
        }
        
        int i=0;
        while(i< s.length()){
            char startChar = s.charAt(i);
            int terminal = endIndex[startChar-'a'];
            
            for(int j=0; j<=terminal; j++){
                terminal = Math.max(terminal, endIndex[s.charAt(j)-'a']);
            }
            ans.add(terminal-i+1);
            i= terminal+ 1;
        }
        return ans;
        
    }
}