/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/
	bool checkBST(Node* root) {
        return recCheck(root,0,10000);
	}
    bool recCheck(Node *p,int min,int max){
        if(p==NULL){
            return true;
        }
        if(p->data<=min || p->data>=max){
            return false;
        }
            return ((recCheck(p->left,min,p->data))&&(recCheck(p->right,p->data,max)));
    }