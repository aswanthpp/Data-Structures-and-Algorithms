/*
Given two linked lists sorted in ascending order. Merge them in-place and return head of the merged list.   For example, if first list is 
10->20->30 and second list is 15->17, then the result list should be 10->15->17->20->30.

It is strongly recommended to do merging in-place using O(1) extra space.
*/
Node* SortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
    Node *p1=head1;
    Node *p2=head2;
    Node *p=NULL;
    Node *head=NULL;
    while(p1!=NULL && p2!=NULL){
        if(p1->data < p2->data){
            if(p==NULL){
                p=new Node;
                p->data=p1->data;
                p->next=NULL;
                head=p;
            }
            else{
                Node *k=new Node;
                k->data=p1->data;
                k->next=NULL;
                p->next = k;
                p=p->next;
                
            }
            p1=p1->next;
        }
        else{
            if(p==NULL){
                p=new Node;
                p->data=p2->data;
                p->next=NULL;
                head=p;
            }
            else{
                Node *k=new Node;
                k->data=p2->data;
                k->next=NULL;
                p->next = k;
                p=p->next;
            }
            p2=p2->next;
        }
    }
    while(p1!=NULL){
        Node *x=new Node;
        x->data=p1->data;
        x->next=NULL;
        p->next=x;
        p1=p1->next;
        p=p->next;
    }
    while(p2!=NULL){
        Node *x=new Node;
        x->data=p2->data;
        x->next=NULL;
        p->next=x;
        p2=p2->next;
        p=p->next;
    }
    return head;
}
