	#include<stdio.h>
#include<stdlib.h>
#define width 5
struct Node
{
    int key;
    struct Node *left;
    struct Node *right;
    int height;
};
  

int height(struct Node *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
 

int max(int a, int b)
{
    return (a > b)? a : b;
}
 
struct Node* newNode(int key)
{
    struct Node* node = (struct Node*)
                        malloc(sizeof(struct Node));
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 1;  
    return(node);
}
struct Node *rightRotate(struct Node *y)
{
    struct Node *x = y->left;
    struct Node *T2 = x->right;
 

    x->right = y;
    y->left = T2;
 

    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;
 

    return x;
}
 
struct Node *leftRotate(struct Node *x)
{
    struct Node *y = x->right;
    struct Node *T2 = y->left;
 

    y->left = x;
    x->right = T2;
 

    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;
 

    return y;
}
 

int getBalance(struct Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}
 
struct Node* insert(struct Node* node, int key)
{

    if (node == NULL)
        return(newNode(key));
 
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else 
        return node;
 
    
    node->height = 1 + max(height(node->left),
                           height(node->right));
 
    int balance = getBalance(node);
 
    
    // Left Left Case
    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
 
    // Right Right Case
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
 
    // Left Right Case
    if (balance > 1 && key > node->left->key)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
 
    // Right Left Case
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
 
    
    return node;
}

struct List {
	int x;
	struct List *next;
};
struct List *head=NULL;
int c=0;
void push(struct List *p,int data){
	if(p==NULL){
		p=(struct List *)malloc(sizeof(struct List));
		p->x=data;
		p->next=NULL;
		head=p;
		c++;
	}
	else{
		struct List *temp=(struct List *)malloc(sizeof(struct List)); 
		temp->x=data;
		temp->next=NULL;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next=temp;
		c++;
	}
}

void inOrder(struct Node *root)
{
    if(root != NULL)
    {
        
        inOrder(root->left);
        push(head,root->key);
        inOrder(root->right);
    }
}
struct Node *merge(struct Node *root1,struct Node *root2){
	struct Node *root=NULL;
	inOrder(root1);
	inOrder(root2);
	for(struct List *p=head;p!=NULL;p=p->next){
		root=insert(root,p->x);
	}
	
	return root;
}
 
void display(struct Node *Node,int space){
	if(Node==NULL){
		return ;
	}
	space+=width;
	display(Node->right,space);
	printf("\n\n");
	for(int i=width;i<space;i++){
		printf(" ");
	}
	printf("%d\n",Node->key);
	display(Node->left,space);
}


int main()
{
  struct Node *root1 = NULL;
 

  root1 = insert(root1, 10);
  root1 = insert(root1, 20);
  root1 = insert(root1, 30);
  root1 = insert(root1, 40);
  root1 = insert(root1, 50);
  root1 = insert(root1, 25);
 
 
  printf("First Tree \n");
    display(root1,0);
  
  struct Node *root2 = NULL;
  root2 = insert(root2, 11);
  root2 = insert(root2, 22);
  root2 = insert(root2, 33);
  root2 = insert(root2, 44);
  root2 = insert(root2, 55);
  root2 = insert(root2, 23);
 
 printf("Second Tree \n");
 	display(root2,0); 
 
 struct Node *root=merge(root1,root2);
 printf("\nAfter Merging\n");
 display(root,0);
  return 0;
}
