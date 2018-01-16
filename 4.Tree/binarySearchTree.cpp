// C++ Program to insert , remove binary search tree using linked list
#include<bits/stdc++.h>
#define width 10
using namespace std;

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
}*root;
struct Node* newNode(int data)
{
  	struct Node *node =new Node;
  	node->data = data;
  	node->left = NULL;
  	node->right = NULL;
  	return(node);
}
void insert(struct Node *parent,struct Node *node){
	if(parent->data>node->data){
		if(parent->left==NULL){
			parent->left=node;
		}
		else{
			insert(parent->left,node);
		}
	}
	else{
		if(parent->right==NULL){
			parent->right=node;
		}
		else{
			insert(parent->right,node);
		}
		
	}
}
struct Node * minValue(struct Node *node){
	if(node==NULL){
		return node;
	}
	struct Node *temp=new Node;
	temp=node;
	while(temp!=NULL){
		temp=temp->left;
	}
	return temp;
}
struct Node * remove(struct Node *node,int key){
	if(node==NULL){
		return node;
	}
	else if(key>node->data){
		node->right=remove(node->right,key);
	}
	else if(key<node->data){
		node->left=remove(node->left,key);
	}
	else{
		if(node->left==NULL){
			struct Node *temp=new Node;
			temp=node->right;
			free(node);
			return temp;
		}
		else if(node->right==NULL){
			struct Node *temp=new Node;
			temp=node->left;
			free(node);
			return temp;
		}
		else{
			struct Node *temp=minValue(node->right);
			node->data=temp->data;
			node->right=remove(node->right,node->data);
		
		}
	}
}
void display(struct Node *node,int space){
	if(node==NULL){
		return ;
	}
	space+=width;
	display(node->right,space);
	cout<<endl;
	for(int i=width;i<space;i++){
		cout<<" ";
	}
	cout<<node->data<<"\n";
	display(node->left,space);
}

int main(){
	int x;
	cout<<"\nEnter root node: ";
	cin>>x;
	root=newNode(x);
	xx: cout<<"\n\t1.Insert\n\t2.Delete\n\t3.Exit\n\n\tEnter option :";
	cin>>x;
	struct Node *node;
	switch(x){
		case 1: cout<<"\n\t  Enter Node value : ";
			int y;
			cin>>y;
			node=newNode(y);
			insert(root,node);
			goto xx;
		case 2: cout<<"\nEnter Node value to delete :";
			cin>>y;
			cout<<"\nBST Before Deletion \n";
			display(root,0);
			root=remove(root,y);
			cout<<"\nBST After Deletion\n";
			display(root,0);
			cout<<"\n\n";
			goto xx;
		case 3: return 1;
		default : cout<<"\nInvalid Option \n";
				goto xx;
			
	}	
	return 1;
}
