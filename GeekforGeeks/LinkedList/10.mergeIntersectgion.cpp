/*
There are two singly linked lists in a system. By some programming error the end node of one of the linked list got linked into the second list, 
forming a inverted Y shaped list. Write a program to get the point where two linked lists merge.
*/
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *p1=head1;
    Node *p2=head2;
    int c1=0;
    while(p1!=NULL){
        p1=p1->next;
        c1++;
    }
    int c2=0;
    while(p2!=NULL){
        p2=p2->next;
        c2++;
    }
    int d;
    struct Node* current1 ;
    struct Node* current2 ;
    if(c1>c2){
        d=c1-c2;
        current1 =head1;
        current2= head2;
    }
    else{
        d=c2-c1;
        current1 =head2;
        current2= head1;
    }
  int i;
  for(i = 0; i < d; i++)
  {
    if(current1 == NULL)
    {  return -1; }
    current1 = current1->next;
  }
 
  while(current1 !=  NULL && current2 != NULL)
  {
    if(current1 == current2)
      return current1->data;
    current1= current1->next;
    current2= current2->next;
  }
 
  return -1;
}
