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
    public ListNode swapNodes(ListNode head, int k) {
        ListNode start =head;
        ListNode end = head;
        ListNode last = head;
        
        while(last.next != null){
            if(k<=1){
                end = end.next;
            }
            else{
                start = start.next;
                k--;
            }
            last = last.next;
        }
        int temp = start.val;
        start.val = end.val;
        end.val = temp;
        return head;
    }
}