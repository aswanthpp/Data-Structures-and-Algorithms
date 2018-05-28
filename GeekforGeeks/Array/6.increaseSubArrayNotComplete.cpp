/*
Given an array of n positive integers. 
Write a program to find the sum of maximum sum subsequence of the given array such that the integers in the 
subsequence are sorted in increasing order.
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
		vector <int> b;
		for(int j=0;j<n;j++){
		    int x;
		    cin>>x;
		    a.push_back(x);
		    b.push_back(x);
		}
		for(int j=1;j<n;j++){
		    for(int k=0;k<j;k++){
		        if(a[j]>a[k] && b[j]<b[k]+a[j])
		              b[j]=b[k]+a[j];
		    }
		}
		int max=0;
		for(int j=0;j<n;j++){
		     if ( max < b[j] )
               max = b[j];
		}
		cout<<max<<"\n";
	}
	return 0;
}
