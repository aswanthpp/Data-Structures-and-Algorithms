/*
Given a linked list, write a function to reverse every k nodes (where k is an input to the function).If a linked list is given as 
1->2->3->4->5->6->7->8->NULL and k = 3 then output will be 3->2->1->6->5->4->8->7->NULL. 
*/
struct node *reverse (struct node *head, int k)
{ 
  // Complete this method
 struct node *cur=head;
 struct node *prev=NULL;
 struct node *next=NULL;
  int c=0;
  while(cur!=NULL && c<k ){
        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        c++;
  }
  if (next !=  NULL)
       head->next = reverse(next, k); 
       
    return prev;
}
