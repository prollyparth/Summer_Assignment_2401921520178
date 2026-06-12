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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int count = 1;
        while(temp->next != NULL){
            temp = temp->next;
            count++;
        }
        if(count == n){
            if(head->next == NULL){
                return NULL;
            }
            else{
                return head->next;
            }
        }
        else if(count < n){
            return head;
        }
        else{
            ListNode *p = head;
            for(int i = 0 ; i < count - n - 1 ; i++){
                p = p->next;
            }
            p->next = p->next->next;
        }
        return head;
    }
};