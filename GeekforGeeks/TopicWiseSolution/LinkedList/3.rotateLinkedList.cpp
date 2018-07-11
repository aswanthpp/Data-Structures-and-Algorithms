/*
Rotate Linked list at index k
*/
void rotate(struct node **head_ref, int k)
{   if(k==0){
        return;
    }
   struct node *p=*head_ref;
   int c=1;
   while(p!=NULL && c<k){
       c++;
       p=p->next;
   }
   if(p==NULL){
       return;
   }
   struct node *q=p;
   while(p->next!=NULL){
       p=p->next;
   }
   p->next=*head_ref;
   *head_ref=q->next;
   q->next=NULL;
   
   
}
