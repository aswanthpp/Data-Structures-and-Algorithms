/*
The cost of a stock on each day is given in an array, find the max profit that 
you can make by buying and selling in those days. 
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findAns(vector <int> a){
    int n=a.size();
    int s=0,e=-1;
    int f=0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            e=i;
        }
        else{
            if(e!=-1){
              cout<<"("<<s<<" "<<e<<") ";
              f = 1;
            }
            s=i;
            e=-1;
        }
    }
    if(e!=-1){
         cout<<"("<<s<<" "<<e<<") ";
         f=1;
    }
    if(f==0){
        cout<<"No Profit";
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
