/*

*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
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
