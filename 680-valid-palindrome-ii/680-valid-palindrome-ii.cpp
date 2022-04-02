class Solution {
public:
    bool checkPalindrome(string s, int left, int right, int counter){
        if(counter>1){
            return false;
        }
        while(left<=right){
            if(s[left]==s[right]){
                left++;
                right--;
            }
            else{
                return (checkPalindrome(s,left+1,right,counter+1) || checkPalindrome(s,left,right-1,counter+1));
            }
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = n-1;
        int counter =0;
        return checkPalindrome(s,start,end,counter);
    }
};