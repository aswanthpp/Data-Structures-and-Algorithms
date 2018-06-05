/*
Given a linked list, remove the loop in it if present. The task is to complete the function removeTheLoop which takes only one argument the head of 
the linked list . The function removes the loop in the linked list if present.
*/
void removeLoop(Node *loop,Node *head){
    Node *ptr1,*ptr2;
      ptr1 = head;
   while (1)
   {
     ptr2 = loop;
     while (ptr2->next != loop && ptr2->next != ptr1)
         ptr2 = ptr2->next;
     if (ptr2->next == ptr1)
        break;
     ptr1 = ptr1->next;
   }
   ptr2->next = NULL;  
}
void removeTheLoop(Node *node)
{
     //Your code here
     Node *p1=node;
     Node *p2=node;
     while(p2!=NULL && p1!=NULL && p1->next!=NULL ){
         p1=p1->next->next;
         p2=p2->next;
         if(p2==p1){
             removeLoop(p1,node);
             return ;
         }
     }
}

