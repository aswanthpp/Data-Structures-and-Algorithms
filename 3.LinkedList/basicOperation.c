// Linked List using nested structure
/* supports 
	1.Insertion at a position
	2. Deletion at a positon
	3. Search a element
*/
#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*head;
void insert(struct Node *node,int key,int pos){
	if(node==NULL){
		struct Node *node=new Node;
		node->data=key;
		head=node;
		
	}
	else if(pos==1){
		struct Node *temp=new Node;
		temp->data=key;
		temp->next=head;
		head=temp;
	}
	else{
		struct Node *p=node;
		int c=1;
		while(c<pos-1 && p->next!=NULL){
			p=p->next;
			c++;
		}
		struct Node *temp=new Node;
		temp->next=p->next;
		temp->data=key;
		p->next=temp;
	}
}
void display(struct Node *node){
	if(node==NULL){
		return ;
	}
	else{
		struct Node *p=node;
		while(p!=NULL){
			cout<<p->data<<" ";
			p=p->next;
		}
	}
}
void remove(struct Node *node,int pos){
	if(node==NULL){
		return;
	}
	else if(pos==1){
		head=node->next;
	}
	else{
		struct Node *p=node;
		int c=1;
		while(c<pos-1 && p->next!=NULL ){
			p=p->next;
			c++;	
		}
		if(p->next->next!=NULL && p->next!=NULL)
			p->next=p->next->next;
		else{
			cout<<"\nInvalid Position Given";
			return ;
		}
	}
}
int main(){
	int x;
	xx:cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\tEnter Option : ";
	cin>>x;
	switch(x){
		case 1: cout<<"\n\t\tEnter value :";
			int y;
			cin>>y;
			int pos;
			cout<<"\nEnter Position : ";
			cin>>pos;
			insert(head,y,pos);
			goto xx;
		case 2:cout<<"\nEnter positon to delete :";
			cin>>y;
			remove(head,y);
			goto xx;
		case 3:cout<<"\nCurrent Linked List : ";
			display(head);
			goto xx;
		case 4:return 1;
	}
}
