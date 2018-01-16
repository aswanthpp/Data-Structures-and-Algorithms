// C Program to search a element in a  array sorted in ascending orders using binary search

#include<stdio.h>
int binary_search(int a[],int key,int n){
	int l=0;
	int h=n;
	int mid;
	while(l<h){
		mid=(l+h)/2;
		if(a[mid]==key){
			return mid;
		}
		else if(a[mid]>key){
			h=mid-1;
		}
		else{
			l=mid+1;
		}
	}
	return -1;
}
void main(){
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int key=10;
	int pos=binary_search(arr,key,10);
	if(pos!=-1)
		printf("\nKey %d found at position %d \n",key,pos+1);
	else
		printf("\nKey %d not found in array ",key);	
}
