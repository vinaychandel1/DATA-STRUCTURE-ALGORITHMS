/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast=head; 
struct ListNode* slow=head;
while(fast!=NULL && fast->next!=NULL){
    fast=fast->next->next;
    slow=slow->next;
    if(fast==slow)
    break;
}
if(fast==NULL || fast->next==NULL)
    return NULL;
slow=head;
while(fast!=slow){
    fast=fast->next;
    slow=slow->next;
}
return slow;
    free(fast);
     free(slow);
    free(head);
    
}
