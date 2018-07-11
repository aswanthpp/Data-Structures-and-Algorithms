/*
Given a string, print all permutations of a given string.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
void findAns(string s,int l,int r){
    if(l==r){
        cout<<s<<" ";
    }
    else{
        for(int i=l;i<=r;i++){
            swap((a+l),(a+i));
            findAns(s,l+1,r);
            swap((a+l),(a+i));
        }
    }
    
}
int main()
{
	//code
	int t;
	cin>>t;
        string s;
	for(int i=0;i<t;i++){
	    cin>>s;
	    findAns(s,0,a.length()-1);
	    cout<<"\n";
	    s.clear();
	}
	return 0;
}
