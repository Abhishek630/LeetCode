class Solution {
    public String removeDuplicateLetters(String s) {
       int[] freq = new int[26];
        for(int i=0; i<s.length();i++){
            freq[s.charAt(i)-'a'] =i;
        }
        
        boolean[] vis = new boolean[26];
        
        Stack<Integer>st = new Stack<>();
        
        for(int i=0;i<s.length();i++){
            int curr = s.charAt(i)-'a';
            if(vis[curr]){
                continue;
            }
            while (!st.isEmpty() && st.peek() > curr &&  freq[st.peek()]-i>0){
                vis[st.pop()] = false; // pop out and mark unseen
            }
            st.push(curr); // add into stack
            vis[curr] = true;
        }
        
        StringBuilder sb = new StringBuilder();
        while (!st.isEmpty())
            sb.append((char) (st.pop() + 'a'));
        return sb.reverse().toString();
        
    }
}