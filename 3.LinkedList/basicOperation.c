// Linked List using nested structure
/* supports 
	1.Insertion at a position
	2. Deletion at a positon
	3. Search a element
*/
#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
}*head;
void insert(struct Node *node,int key){
	if(node==NULL){
		node=new Node;
	}
}
int main(){
	int x;
	xx:cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\n\tEnter Option";
	cin>>x;
	switch(x){
		case 1: cout<<"\n\t\tEnter value :";
			int y;
			cin>>y;
			insert(head,y);
			goto xx;
		case 2:cout<<"\nEnter positon to delete :";
			cin>>y;
			remove(head,y);
			goto xx;
		case 3:cout<<"\nCurrent Linked List : ";
			display(head);
			goto xx;
		case 4:return 1;
	}
}
