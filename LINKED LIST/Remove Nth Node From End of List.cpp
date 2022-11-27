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
      
      /** Traverse fast Pointer to Kth position */
      ListNode* fast = head, *slow = head;
      for(int i = 0; i < n; i++) {
        fast = fast->next;
      }
      
      /** Increment both fast and slow by 1 until the fast pointer reaches the end */
      ListNode *prev = head;
      while (fast != NULL) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
      }
      
      if (slow != head) {
        prev->next = slow->next;
      }
      else {
        head = head->next;
      }
      return head;
    }
};



/*
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
      struct ListNode *t,*prev;
        t=head;
        int total=0;
        while(t)
        {
           total+=1;
            t=t->next;
        }
        if(total==1 && n>0) return NULL;
        if(total==n) {
            head=head->next;
            return head;
        }
        n=total-n;
        t=head;
        while(n)
        {
             prev=t;
            t=t->next;
            n--;
        }
        prev->next=t->next;
        t->next=NULL;
         return head;
    }
   
};


*/

//https://leetcode.com/problems/remove-nth-node-from-end-of-list/
