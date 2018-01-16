// C Program to create and display binary tree using linked list

#include<bits/stdc++.h>
#define width 5
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
	cout<<"\n\t\t1.Left Child\n\t\t2.Right Child\n\t\tEnter option : ";
	int f;
	cin>>f;
	if(f==1){
		if(parent->left==NULL){
			parent->left=node;
		}
		else{
			insert(parent->left,node);
		}
	}
	else if(f==2){
		if(parent->right==NULL){
			parent->right=node;
		}
		else{
			insert(parent->right,node);
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
	xx: cout<<"\n\t1.Insert\n\t2.Display\n\t3.Exit\n\n\tEnter option :";
	cin>>x;
	struct Node *node;
	switch(x){
		case 1: cout<<"\n\t  Enter Node value : ";
			int y;
			cin>>y;
			node=newNode(y);
			insert(root,node);
			goto xx;
		case 2: cout<<"\n\t\t\tBinary Tree\n";
			display(root,0);
			cout<<"\n\n";
			goto xx;
		case 3: return 1;
		default : cout<<"\nInvalid Option \n";
				goto xx;
			
	}	
	return 1;
	
}
