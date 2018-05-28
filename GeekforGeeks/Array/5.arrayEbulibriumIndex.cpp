/*
Given an array A your task is to tell at which position the equilibrium first occurs in the array. 
Equilibrium position in an array is a position such that the sum of elements below it is equal to the sum of elements after it.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
		int n;
		cin>>n;
		vector <int> a;
		int s=0;
		for(int j=0;j<n;j++){
		    int x;
		    cin>>x;
		    a.push_back(x);
		    s+=a;
		    
		}
	    for(int j=0;j<n;j++){
	     for(int k=0;k<=j;k++){
	         
	     }   
	    }
	}
	return 0;
}
