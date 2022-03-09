/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next){
            return head;
        }
        int data = head->val;
        ListNode* temp = head->next;
        
        if(temp->val!= data){
            head->next = deleteDuplicates(temp);
            return head;
        }
        else{
            while(temp!=NULL && temp->val == data){
                ListNode* dummy = temp;
                temp = temp->next;
                delete dummy;
            }
            delete head;
            return  deleteDuplicates(temp);
        }
    }
};