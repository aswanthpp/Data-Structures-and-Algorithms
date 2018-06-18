/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node {
    int data;
    Node* left, * right;
}; */
/* Should return true if tree represented by root is BST. 
   For example, return  value should be 1 for following tree.
         20
     /      \ 
   10       30
  and return value should be 0 for following tree.
         10
     /      \ 
   20       30 */
int isBSTUtil(Node *root,int min,int max){
    // Your code here
    if(root==NULL){
        return 1;
    }
    if(root->data < min || root->data > max){
        return 0;
    }
    return (isBSTUtil(root->left,min,root->data-1) && isBSTUtil(root->right,root->data+1,max));
}
bool isBST(Node* root) {
    int x=isBSTUtil(root,INT_MIN,INT_MAX);
    if(x==1){
        return true;
    }
    else{
        return false;
    }
    
}

