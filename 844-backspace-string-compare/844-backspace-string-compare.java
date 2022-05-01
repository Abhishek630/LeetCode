class Solution {
    public boolean backspaceCompare(String s, String t) {
        
        Stack<Character>sutil = new Stack<>();
        Stack<Character>tutil = new Stack<>();
        for(int i=0; i<s.length(); i++){
            if(sutil.size()==0 && s.charAt(i)=='#'){
                continue;
            }
            if(s.charAt(i)=='#'){
                sutil.pop();
            }
            else{
                sutil.push(s.charAt(i));
            }
        }
        
        for(int i=0; i<t.length(); i++){
            if(tutil.size()==0 && t.charAt(i)=='#'){
                continue;
            }
            if(t.charAt(i)=='#'){
                tutil.pop();
            }
            else{
                tutil.push(t.charAt(i));
            }
        }
        
        if(sutil.size() != tutil.size()){
            return false;
        }
        
        for(int i=sutil.size()-1;i>=0;i--){
            if(sutil.peek() != tutil.peek()){
                return false;
            }
            else{
                sutil.pop();
                tutil.pop();
            }
        }
        return true;
    }
}