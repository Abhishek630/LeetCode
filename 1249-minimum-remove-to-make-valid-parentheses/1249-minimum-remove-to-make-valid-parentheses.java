class Solution {
    public String minRemoveToMakeValid(String s) {
        int n = s.length();
        char ch[] = s.toCharArray();
        
        int count =0;
        
        for(int i=0;i<n;i++){
            if(ch[i]=='('){
                count++;
            }
            else if(ch[i]==')'){
                if(count>0){
                    count--;
                }
                else{
                    ch[i]=0;
                }
            }
        }
        
        count =0;
        for(int i=n-1;i>=0;i--){
            if(ch[i]==')'){
                count++;
            }
            else if(ch[i]=='('){
                if(count>0){
                    count--;
                }
                else{
                    ch[i]=0;
                }
            }
        }
        
        StringBuilder sb = new StringBuilder();
        
        for(int i=0;i<n;i++){
            if(ch[i]!=0){
                sb.append(ch[i]);
            }
        }
        return sb.toString();
    }
}