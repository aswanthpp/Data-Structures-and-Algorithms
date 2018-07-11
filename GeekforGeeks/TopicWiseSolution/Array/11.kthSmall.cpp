/*
Given an array and a number k where k is smaller than size of array,
the task is to find the k’th smallest element in the given array. 
It is given that all array elements are distinct.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findKsmall(vector <int> a,int q){
    int n=a.size();
    int pos;
    int min;
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
    return a[q-1];
}
int main()
 {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector <int> a;
		for(int j=0;j<n;j++){
		    int x;
		    cin>>x;
		    a.push_back(x);
		}
		int k;
		cin>>k;
		cout<<findKsmall(a,k)<<"\n";
	}
	return 0;
}
