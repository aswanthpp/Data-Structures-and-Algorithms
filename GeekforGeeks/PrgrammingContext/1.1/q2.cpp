#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void genUtil(vector <char> a,vector <char> p,int l){
    int n=a.size();
    if(l==0){
        return;
    }
    else if(l==1){
        p.push_back(s[n-l]);
        for(int i=0;i<n;i++){
            cout<<p[i]
        }
        cout<<" ";
        for(int i=0;i<n;i++){
            cout<<p[i]
        }
    }
}
void gen(string s){
    int l=s.length();
    vector <char> a;
    for(int i=0;i<l;i++){
        if(s[i]>='a' &&s[i]<='z'){
            a.push_back(s[i]-32);    
        }
        else{
            a.push_back(s[i]);
        }
    }
    vector <char> p;
    for(int i=0;i<l;i++){
        p.push_back(a[i]);
        genUtil(a,p,l-i-1);
    }
    
}
int main()
 {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    string s;
	    cin>>s;
	    gen(s);
	    cout<<"\n";
	}
	return 0;
}