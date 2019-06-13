/*
For an array, inversion count indicates how far (or close) the array is from being sorted. If array is already sorted then inversion count is 0. If array is sorted in reverse order that inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int counter;
void merge(	vector <int> a, int p, int q, int r){
    int l = q-p+1;
    int a1[l];

    int l2 = r-q;
    // cout << p << " " << r << " " << r << endl;
    // return;
    int a2[l2];
    
    for(int i = 0;i<l;i++){
        a1[i] = a[i+p];
    }
    
    for(int i = 0;i<l2;i++){
        a2[i] = a[q+i+1];
    }
    
    int left = 0, right = 0, k = p;
    
    while(left < l && right < l2)
    {
        if(a1[left] <= a2[right]){
            a[k] = a1[left];
            left++;
        }
        else{
            a[k] = a2[right];
            right++;
            
            counter += (l-left); // Increementing counter
        }
        k++;
    }
    
    while(left < l){
        a[k++] = a1[left++];
      //  counter++;
    }
    
    while(right < l2){
        // counter++;
        a[k++] = a2[right++];
    }
}
void mergeSort(	vector <int> a, int l, int r){
    
    if(l < r)
    {
        long long q = (l+r)/2;
        mergeSort(a, l, q);
        mergeSort(a, q+1, r);
        merge(a, l, q, r);
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
		counter=0;
		vector <int> a;
		for(int j=0;j<n;j++){
		    int x;
		    cin>>x;
		    a.push_back(x);
		}
		mergeSort(a,0,a.size()-1);
		cout<<counter-1<<"\n";
		
	}
	return 0;
}
