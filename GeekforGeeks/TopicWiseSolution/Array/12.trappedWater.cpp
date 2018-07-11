/*
Given n non-negative integers in array representing an elevation map where the 
width of each bar is 1, compute how much water it is able to trap after raining.
For example:
Input:
3
2 0 2
Output:
2
Structure is like below
| |
|_|
We can trap 2 units of water in the middle gap.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findWater(vector <int> a){
    int n=a.size();
    vector <int> l(n);
    vector<int> r(n);
    l[0]=a[0];
    for(int i=1;i<n;i++){
        if(l[i-1]>a[i]){
            l[i]=l[i-1];
        }
        else{
            l[i]=a[i];
        }
    }
    r[n-1]=a[n-1];
    for(int i=n-2;i>=0;i--){
        if(r[i+1]>a[i]){
            r[i]=r[i+1];
        }
        else{
            r[i]=a[i];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=min(l[i],r[i])-a[i];
    }
    return sum;
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
		cout<<findWater(a)<<"\n";
	}
	return 0;
}
