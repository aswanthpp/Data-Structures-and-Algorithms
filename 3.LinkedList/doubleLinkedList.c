#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
	struct Node *prev;
}*head;
void insert(struct Node *node,int key,int pos){
	if(node==NULL){
		node=new Node;
		node->data=key;
		node->next=NULL;
		node->prev=NULL;
		head=node;
	}
	else if(pos==1){
		Node *temp=new Node;
		temp->data=key;
		temp->next=head;
		temp->prev=NULL;
		head=temp;
	}
	else{
		Node *temp=new Node;
		temp->data=key;
		temp->next=NULL;
		temp->prev=NULL;
		int c=1;
		while(c<pos-1 && pr
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
