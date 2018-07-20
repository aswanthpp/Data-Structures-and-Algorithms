//Write a program to sort an array of 0's,1's and 2's in ascending order.
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
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
		int lo = 0;
        int hi = a.size() - 1;
        int mid = 0;
 
        while (mid <= hi)
        {
         switch (a[mid])
          {
            case 0: swap(&a[lo++], &a[mid++]);break;
            case 1:mid++;break;
            case 2:swap(&a[mid], &a[hi--]);break;
          }
         }
         for(int j=0;j<n;j++){
             cout<<a[j]<<" ";
         }
		cout<<"\n";
		
	}
	return 0;
}
