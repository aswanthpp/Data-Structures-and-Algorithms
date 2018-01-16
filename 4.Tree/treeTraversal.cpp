// c program to Traverse the tree using inorder preorder and post order traversal
#include<bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node *left;
	struct Node *right;
}*root;
void preOrder(struct Node *node){
}
void postOrder(struct Node *node){
}
void inOrder(struct Node *node){
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
int main(){
	int x;
	cout<<"\nEnter root node: ";
	cin>>x;
	root=newNode(x);
	xx: cout<<"\n\t1.Insert\n\t2.Prorder\n\t3.PostOrder\n\t4.Inorder\n\t5.Exit\n\n\tEnter option :";
	cin>>x;
	struct Node *node;
	switch(x){
		case 1: cout<<"\n\t  Enter Node value : ";
			int y;
			cin>>y;
			node=newNode(y);
			insert(root,node);
			goto xx;
		case 2:preOrder(root);
			goto xx;
		case 3:postOrder(root);
			goto xx;
		case 4:inOrder(root);
			goto xx;
		case 5:return 1;
	}
}
	
