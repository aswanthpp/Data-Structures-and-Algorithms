/*
Given an array and an integer k, find the maximum for each and every contiguous subarray of size k.
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
		int q;
		cin>>q;
		for(int j=0;j<n;j++){
		    int x;
		    cin>>x;
		    a.push_back(x);
		}
		for(int j=0;j<=n-q;j++){
		    int max=a[j];
		    for(int k=0;k<q;k++){
		        if(max<a[j+k]){
		            max=a[j+k];
		        }
		    }
		    cout<<max<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
