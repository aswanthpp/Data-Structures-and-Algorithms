#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#define width 5
using namespace std;
struct Node
{       int data;
        struct Node *left,*right;
        int height;
};
	
struct Node *root=NULL;
int max(int a,int b){
	if(a>b)
		return a;
	else 
		return b;
}
int getHeight(struct Node *p){
	if(p=NULL){
		return 0;
	}
	return p->height;
}
int checkBalance(struct Node *p){
	if(p==NULL){
		return 0;
	}
	return (getHeight(p->right) - getHeight(p->left));
}	
void leftRotate(struct Node *x){
	struct Node *y = x->right;
    struct Node *T2 = y->left;
 
    // Perform rotation
    y->left = x;
    x->right = T2;
 
    //  Update heights
    x->height = max(getHeight(x->left), getHeight(x->right))+1;
    y->height = max(getHeight(y->left), getHeight(y->right))+1;
 
}
void rightRotate(struct Node *y){
	struct Node *x = y->left;
    struct Node *T2 = x->right;
 
    // Perform rotation
    x->right = y;
    y->left = T2;
 
    // Update heights
    y->height = max(getHeight(y->left), getHeight(y->right))+1;
    x->height = max(getHeight(x->left), getHeight(x->right))+1;
 


}
void insert(struct Node *p,int data)
{
        if(data<=p->data)
        {       if(p->left==NULL)
                {struct Node *p1=(struct Node *)malloc(sizeof(struct Node ));
                        p1->data=data;
                        p1->right=NULL;
                        p1->left=NULL;
                        p->left=p1;
                }
                else
                {       insert(p->left,data);
                }
        }
        else

        {       if(p->right==NULL)
                {      struct Node *p1=(struct Node *)malloc(sizeof(struct Node ));
                        p1->data=data;
                        p1->right=NULL;
                        p1->left=NULL;
                        p->right=p1;
                }
                else
                {       insert(p->right,data);
                }
        }
        p->height=1+max(getHeight(p->left),getHeight(p->right));
        if(checkBalance(p)>1 && data < p->left->data){
        	rightRotate(p);
        
        }
        else if(checkBalance(p)<-1 && data > p->right->data){
        	leftRotate(p);
        }
        else if(checkBalance(p)>1 && data > p->left->data){
        	leftRotate(p->left);
        	rightRotate(p);
        }
        else if(checkBalance(p)<-1 && data < p->right->data){
        	rightRotate(p->right);
        	leftRotate(p);
        }
                                                                                                                          
}
void display(struct Node *Node,int space){
	if(Node==NULL){
		return ;
	}
	space+=width;
	display(Node->right,space);
	cout<<endl;
	for(int i=width;i<space;i++){
		cout<<" ";
	}
	cout<<Node->data<<"\n";
	display(Node->left,space);
}
main()
{       int n,data,f=0;
        printf("\nEnter Root Value:");
        scanf("%d",&data);
        struct Node *p=(struct Node *)malloc(sizeof(struct Node ));
        p->data=data;
        p->left=NULL;
        p->right=NULL;
        p->height=0;
        root=p;
        printf("\n1.Insert\n2.Display\n3.Exit");
        do
        {               printf("\n\tEnter Option:");
                        scanf("%d",&n);
                        switch(n)
                        {       case 1: printf("\nEnter Data:");
                                        scanf("%d",&data);
                                                                                                                  
          		               insert(root,data);
                                        break;
                                case 2:display(root,0);break;
                                case 3: exit(0);

                        }
        }while(1);
}

