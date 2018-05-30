/*
Given an array, reverse every sub-array formed by consecutive k elements.
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
		int k;
		cin>>k;
		for(int j=0;j<n;j=j+k){
		    int left = j;
 
        // to handle case when k is not multiple of n
        int right = min(j + k - 1, n - 1);
 
        // reverse the sub-array [left, right]
        while (left < right)
            swap(a[left++], a[right--]);
		}
		for(int j=0;j<n;j++){
		    cout<<a[j]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
