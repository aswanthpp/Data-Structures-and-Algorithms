/*
Given an array of distinct elements, rearrange the elements of array in zig-zag
fashion in O(n) time.The converted array should be in form a < b > c < d > e <f.
The relative order of elements is same in the output i.e you have to iterate on 
the original array only.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findAns(vector <int> a){
    int n=a.size();
    int flag=1;
    for(int i=0;i<n-1;i++){
        if(flag==1){
            if(a[i]>a[i+1]){
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
        else{
            if(a[i]<a[i+1]){
                int t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
        if(flag==1){
            flag=2;
        }
        else if(flag==2){
            flag=1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
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
		findAns(a);
		cout<<"\n";
		
	}
	return 0;
}
