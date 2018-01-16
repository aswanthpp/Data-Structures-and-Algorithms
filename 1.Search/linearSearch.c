// C Program to search a element in a  array using linear search

#include<stdio.h>
int linearSearch(int a[],int key,int n){
	for(int i=0;i<n;i++){
		if(a[i]==key)
			return i;
	}
	return -1;
}
void main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int key=10;
	int pos=linearSearch(arr,key,10);
	if(pos!=-1)
		printf("\nKey %d found at position %d \n",key,pos+1);
	else
		printf("\nKey %d not found in array ",key);	
}
