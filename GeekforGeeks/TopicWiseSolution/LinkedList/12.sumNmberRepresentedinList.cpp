/*
Given two numbers represented by two lists, write a function that returns sum list. The sum list is list representation of addition of two input 
numbers.

Suppose you have two linked list 5->4 ( 4 5 )and 5->4->3( 3 4 5) you have to return  a resultant linked list 0->9->3 (3 9 0).
*/
Node*  addTwoLists(Node* first, Node* second){
  // Code here
  Node *p1=first;
  Node *p2=second;
  Node *p=NULL;
  Node *head=NULL;
  int r=0;
  while(p1!=NULL && p2!=NULL){
      if(head==NULL){
          p=new Node;
          p->data=p1->data+p2->data;
          p->data+=r;
          if(p->data >= 10){
              r=p->data/10;
              p->data=p->data%10;
          }
          else{
              r=0;
          }
          head=p;
       }
       else{
            Node *q=new Node;
            q->data= p1->data+p2->data;
            q->data += r;
            if(q->data >= 10){
                r= q->data/10;
                q->data=q->data%10;
              }
              else{
                  r=0;
              }
            q->next=NULL;
            p->next=q;
            p=p->next;
        }
        p1=p1->next;
        p2=p2->next;
      }
      while(p1!=NULL){
        if(head==NULL){
          p=new Node;
          p->data=p1->data;
          p->data+=r;
          if(p->data>=10){
              r=p->data/10;
              p->data=p->data%10;
          }
          else{
              r=0;
          }
          head=p;
       }
       else{
            Node *q=new Node;
            q->data=p1->data;
            q->data+=r;
            if(q->data>=10){
                r=q->data/10;
                q->data%=9;
              }
              else{
                  r=0;
              }
            q->next=NULL;
            p->next=q;
            p=p->next;
        }  
        p1=p1->next;
      }
      while(p2!=NULL){
        if(head==NULL){
          p=new Node;
          p->data=p2->data;
          p->data+=r;
          if(p->data>=10){
              r=p->data/10;
              p->data=p->data%10;
          }
          else{
              r=0;
          }
          head=p;
       }
       else{
            Node *q=new Node;
            q->data=p2->data;
            q->data+=r;
            if(q->data>=10){
                r=q->data/10;
                q->data%=9;
              }
              else{
                  r=0;
              }
            q->next=NULL;
            p->next=q;
            p=p->next;
        }   
        p2=p2->next;
      }
      if(r!=0){
          Node *q=new Node;
          q->data=r;
          q->next=NULL;
          p->next=q;
      }
      return head;
}
