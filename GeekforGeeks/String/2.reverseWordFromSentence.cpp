/*
Given a String of length N reverse the words in it. Words are separated by dots.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findAns(string s){
   int l=s.length();
   vector <char> a[l];
   int c=0;
   for(int i=0;i<0;i++){
       if(s[i]!='.'){
           a[c].push_back(s[i]);
       }
       else{
           c++;
       }
   }
   for(int i=0;i<c-1;i++){
       for(int j=0;j<a[i].size();j++){
           cout<<a[i][j];
       }
       cout<<".";
   }
   for(int j=0;j<a[c-1].size();j++){
           cout<<a[c][j];
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
	    findAns(s);
	    cout<<"\n";
	    s.clear();
	}
	return 0;
}
