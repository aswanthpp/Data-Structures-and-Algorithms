/*
Given a Binary Tree, print Left view of it. Left view of a Binary Tree is set of nodes visible when tree is visited from Left side.

Left view of following tree is 1 2 4 8

          1
       /     \
     2        3
   /     \    /    \
  4     5   6    7
   \
     8
*/
/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void leftViewUtil(Node *root,int level,int *max_level){
  if(root==NULL){
      return;
  }
  if(*max_level < level){
       cout<<root->data<<" ";
       *max_level=level;
  }
  leftViewUtil(root->left,level+1,max_level);
  leftViewUtil(root->right,level+1,max_level);
    
}
void leftView(Node *root)
{
   // Your code here
   
   int max_level=0;
   leftViewUtil(root,1,&max_level);
   
}
