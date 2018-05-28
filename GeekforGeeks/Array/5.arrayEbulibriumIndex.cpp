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
		    s+=x;
		    
		}
		//cout<<"\nSum "<<s;
		int lsum=0;
		int f=0;
		//cout<<"Total Sum "<<s<<"\n";
	    for(int j=0;j<n;j++){
	     s -=a[j];
	     if(lsum==s){
	         cout<<j+1<<"\n";
	         f=1;
	         break;
	         
	     }
	     lsum +=a[j];
	    // cout<<"\nSum "<<s<<" lsum "<<lsum<<"\n";
	    }
	    if(f==0){
	        cout<<"-1\n";
	    }
	}
	return 0;
}
