/*
Write a program to print all the LEADERS in the array.
An element is leader if it is greater than all the elements to its right side. The rightmost element is always a leader. 
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
		for(int j=0;j<n;j++){
		    int x;
		    cin>>x;
		    a.push_back(x);
		}
		int max=-1;
		vector <int> b;
		for(int j=n-1;j>=0;j--){
		    if(max<a[j]){
		        max=a[j];
		        b.push_back(a[j]);
		    }
		}
		for(int j=b.size()-1;j>=0;j--){
		    cout<<b[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
