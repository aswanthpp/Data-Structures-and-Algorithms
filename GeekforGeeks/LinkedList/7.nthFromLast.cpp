/*
Given a linked list, the task is to find the n'th node from the end.  It is needed to complete a method that takes two argument, head of linked list 
and an integer n. There are multiple test cases. For each test case, this method will be called individually.
*/
int getNthFromLast(Node *head, int n)
{
       // Your code here
       Node *p=head,*p1=head;
       int c=0;
       int k=0;
       while(p!=NULL){
           if(c<n){
               p=p->next;
               c++;
               k++;
           }
           else{
               p=p->next;
               p1=p1->next;
               k++;
           }
       }
       if(k<n){
           return -1;
       }
       else{
           return p1->data;
       }
}
