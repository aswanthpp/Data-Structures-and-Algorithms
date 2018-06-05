/*
Given a singly linked list of integers, Your task is to complete the function isPalindrome that returns true if the given list is palindrome,
 else returns false
*/
bool isPalindrome(Node *head)
{
    //Your code here
    int c=0;
    Node *p=head;
    stack <int> a;
    while(p!=NULL){
        p=p->next;
        c++;
    }
    if(c%2==0){
        p=head;
        int k=0;
        while(p!=NULL){
            if(k<c/2){
                a.push(p->data);
                p=p->next;
                k++;
            }
            else{
                if(a.top()!=p->data){
                    return 0;
                }
                else{
                    a.pop();
                    p=p->next;
                }
                k++;
            }
        }
        return 1;
    }
    else{
        p=head;
        int k=0;
        while(p!=NULL){
            if(k<c/2){
                a.push(p->data);
                p=p->next;
                k++;
            }
            else if(k==(c/2)+1){
                p=p->next;
            }
            else{
                if(a.top()!=p->data){
                    return 0;
                }
                else{
                    a.pop();
                    p=p->next;
                }
                k++;
            }
        }
        return 1; 
    }
    
}
