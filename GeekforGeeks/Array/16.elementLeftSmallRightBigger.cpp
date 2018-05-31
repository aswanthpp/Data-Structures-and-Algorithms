/*
Given an unsorted array of size N. Find the first element in array such that 
all of its left elements are smaller and all right elements to it are greater 
than it.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findAns(vector <int> a){
    int n=a.size();
    vector <int> l(n);
    vector <int> r(n);
    l[0]=INT_MIN;
    for(int i=1;i<n;i++){
        if(a[i-1]>=l[i-1]){
            l[i]=a[i-1];
        }
        else{
            l[i]=l[i-1];
        }
    }
    r[n-1]=INT_MAX;
    for(int j=n-2;j>=0;j--){
        if(a[j+1]<=r[j+1]){
            r[j]=a[j+1];
        }
        else{
            r[j]=r[j+1];
        }
    }
    for(int i=1;i<n-1;i++){
        if(a[i]>=l[i] && a[i]<=r[i]){
            return a[i];
        }
    }
    return -1;
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
		cout<<findAns(a)<<"\n";
		
	}
	return 0;
}
