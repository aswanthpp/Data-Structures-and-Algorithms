/*
Reverse a Linked List
*/
Node* reverse(Node *head)
{
  // Your code here
  Node *cur,*prev,*next;
  cur=head;
  while(cur!=NULL){
       next  = cur->next;  
        cur->next = prev;   
        prev = cur;
        cur = next;
      
  }
  return prev;
}
