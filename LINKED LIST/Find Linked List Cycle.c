/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
  struct ListNode *slow_p=head,*fast_p=head;
        while(slow_p && fast_p && fast_p->next){
            fast_p=fast_p->next->next;
            slow_p=slow_p->next;
            if(fast_p==slow_p) return true;
        }
        return false;  
    free(head);
    free(slow_p);
    free(fast_p);
}

/*https://leetcode.com/problems/linked-list-cycle/*/
