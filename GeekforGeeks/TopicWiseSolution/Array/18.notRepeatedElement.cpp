/*
Given a sorted array of integers, every element appears twice except for one. 
Find that single one in linear time complexity and without using extra memory.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findAns(vector <int> a){
    int n=a.size();
    stack <int> b;
    b.push(a[0]);
    for(int i=1;i<n;i++){
        if(b.size()!=0){
            if(b.top()==a[i]){
                b.pop();
            }
            else{
                 return b.top();
            }
        }
        else{
           b.push(a[i]);
        }
    }
    if(b.size()!=0){
        return b.top();
    }
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
