/*
Find Mid Point of Linked List
*/

int getMiddle(Node *head)
{
   // Your code here
   Node *p1=head;
   Node *p2=head;
   if(head!=NULL)
   while(p1!=NULL&&p1->next!=NULL ){
       p1=p1->next->next;
       p2=p2->next;
   }
   return p2->data;
}
