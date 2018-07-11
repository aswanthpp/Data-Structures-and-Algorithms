/*
Given a Binary Tree,  print the bottom view from left to right. A node x is there in output if x is the bottommost node at its horizontal distance 
from root. Horizontal distance of left child of a node x is equal to horizontal distance of x minus 1, and that of right child is horizontal 
distance of x plus 1.

Examples:

                      20
                    /    \
                  8       22
                /   \        \
              5      3       25
                    /   \      
                  10    14

For the above tree the output should be 5, 10, 3, 14, 25.
*/
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node class
struct Node
{
    int data; 
    Node *left, *right; 
}; */
// Method that prints the bottom view.
void bottomView(Node *root)
{
   // Your Code Here
   if(root==NULL){
       return;
   }
   if(root->left!=NULL && root->right!=NULL){
       bottomView(root->left);
       bottomView(root->right);
   }
   else if(root->left==NULL && root->right!=NULL){
       cout<<root->left->data<<" ";
       bottomView(root->right);
   }
   else if(root->left!=NULL && right==NULL){
       cout<<root->right->data<<" ";
       bottomView(root->left);
   }
   else{
       cout<<root->data;
   }
   
}

