/*
Given an array of integers, write a function that returns true if there is a 
triplet (a, b, c) that satisfies a2 + b2 = c2.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string checkPyth(vector <int> a){
    int n=a.size();
    vector <int> b;
    for(int i=0;i<n;i++){
        b.push_back(a[i]*a[i]);
    }
    sort(b.begin(),b.end());
    int f=0;
    for(int i=n-1;i>=2;i--){
        int l=0;
        int r=i-1;
        while(l<r){
            if(b[l]+b[r]==b[i]){
                return "Yes";
            }
            else if(b[l]+b[r]<b[i]){
                l++;
            }
            else{
                r--;
            }
        }
    }
    return "No";
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
		cout<<checkPyth(a)<<"\n";
		
	}
	return 0;
}
