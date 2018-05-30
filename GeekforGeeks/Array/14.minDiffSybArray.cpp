/*
Given an array A[] of N integers where each value represents number of 
chocolates in a packet.Each packet can have variable number of chocolates. 
There are m students, the task is to distribute chocolate packets such that :
1. Each student gets one packet.
2. The difference between the number of chocolates given to the students in 
packet with maximum chocolates and packet with minimum chocolates is minimum.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findAns(vector <int> a,int m){
    int n=a.size();
    if (m==0 || n==0)
        return 0;
    sort(a.begin(),a.end());
    if (n < m)
       return -1;
    int min_diff = INT_MAX;
    int first = 0, last = 0;
    for (int i=0; i+m-1<n; i++)
    {
        int diff = a[i+m-1] - a[i];
        if (diff < min_diff)
        {
            min_diff = diff;
            first = i;
            last = i + m - 1;
        }
    }
    return (a[last] - a[first]);
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
		int m;
		cin>>m;
		cout<<findAns(a,m)<<"\n";
	}
	return 0;
}
