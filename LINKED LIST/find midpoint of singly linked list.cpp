Node *midPoint(Node *head)
{ 
  if (head == NULL || head->next == NULL) 
{ return head; }
  Node *slow = head, *fast = head->next; 
  while(fast != NULL && fast->next != NULL)
  { slow = slow->next; 
   fast = fast->next->next;
  }
