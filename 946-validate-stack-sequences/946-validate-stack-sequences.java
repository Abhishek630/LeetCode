class Solution {
    public boolean validateStackSequences(int[] pushed, int[] popped) {
        int i=0;
        int j =0;
        
        Stack<Integer> st = new Stack<Integer>();
        
        while(i< pushed.length){
            st.push(pushed[i++]);
            while(st.size()>0 && st.peek()== popped[j]){
                st.pop();
                j++;
            }
        }
        return st.isEmpty();
        
    }
}