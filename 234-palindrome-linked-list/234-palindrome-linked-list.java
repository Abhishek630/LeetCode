/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public boolean isPalindrome(ListNode head) {
        ArrayList<Integer> arr = new ArrayList<>();
        ListNode temp = head;
        while(temp!= null){
            arr.add(temp.val);
            temp = temp.next;
        }
        int n = arr.size();
        int s=0;
        int e = n-1;
            while(s<=e){
                if (arr.get(s) != arr.get(e)){
                    return false;
                }
                else{
                    s++;
                    e--;
                }
        }
        return true;
    }
}