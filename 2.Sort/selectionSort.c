// selection Sort
#include<iostream>
using namespace std;
void selectionSort(int a[],int n){
	int min=a[0];
	int pos=0;
	
	for(int i=0;i<n;i++){
		pos=i;
		min=a[i];
		for(int j=i;j<n;j++){
			if(a[j]<min){
				min=a[j];
				pos=j;
			}
		}
		int tmp=a[pos];
		a[pos]=a[i];
		a[i]=tmp;
	}
}
int  main(){
	int arr[]={3,4,1,9,5,2,10,8,6,7};
	cout<<"\nInitial : ";
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	selectionSort(arr,10);
	cout<<"\nAfter Sorting : ";
	for(int i=0;i<10;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 1;		
}
