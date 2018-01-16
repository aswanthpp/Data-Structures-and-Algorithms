// c++ program to Traverse the tree using inorder preorder and post order traversal
#include<bits/stdc++.h>
#define width 5
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
}*root;
void preOrder(struct Node *node){
	if(node==NULL){
		return ;
	}
	cout<<node->data<<" ";
	preOrder(node->left);
	preOrder(node->right);
}
void postOrder(struct Node *node){
	if(node==NULL){
		return ;
	}
	postOrder(node->left);
	postOrder(node->right);
	cout<<node->data<<" ";
	
}
void inOrder(struct Node *node){
	if(node==NULL){
		return ;
	}
	inOrder(node->left);
	cout<<node->data<<" ";
	inOrder(node->right);
}
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
	xx: cout<<"\n\t1.Insert\n\t2.Prorder\n\t3.PostOrder\n\t4.Inorder\n\t5.Display\n\t6.Exit\n\n\tEnter option :";
	cin>>x;
	struct Node *node;
	switch(x){
		case 1: cout<<"\n\t  Enter Node value : ";
			int y;
			cin>>y;
			node=newNode(y);
			insert(root,node);
			goto xx;
		case 2:cout<<"\n\n\t\tPreOrder Traversal : ";preOrder(root);cout<<endl;
			goto xx;
		case 3:cout<<"\n\n\t\tpostOrder Traversal : ";postOrder(root);cout<<endl;
			goto xx;
		case 4:cout<<"\n\n\t\tinOrder Traversal : ";inOrder(root);cout<<endl;
			goto xx;
		case 5:cout<<"\n\t\tBinary Tree \n";
			display(root,0);
			goto xx;
		case 6:return 1;
		default:cout<<"\nInvalid Option";
			goto xx;
	}
}
	
