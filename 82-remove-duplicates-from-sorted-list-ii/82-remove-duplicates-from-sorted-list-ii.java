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
    public ListNode deleteDuplicates(ListNode head) {
        if(head == null || head.next==null){
            return head;
        }
        int data = head.val;
        ListNode temp = head.next;
        
        if(temp.val!= data){
            head.next = deleteDuplicates(temp);
            return head;
        }
        else{
            while(temp!=null && temp.val == data){
                ListNode dummy = temp;
                temp = temp.next;
            }
            return  deleteDuplicates(temp);
        }
    }
}