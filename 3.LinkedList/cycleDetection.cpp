bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    int f=0;
    if(head == NULL){
        return false;
    }
    Node *p1=head;
    Node *p2=head;
    do{
        if(p1->next!=NULL){
         p1=p1->next;
        }
        else{
            f=1;
        }
        if(p2->next->next!=NULL){
         p2=p2->next->next;
        }
        else{
            f=1;
        }
    }while(p1!=p2);
    if(f==1){
        return false;
    }
    else{
        return true;
    }
}
