/*
Given an expression string exp, examine whether the pairs and the orders of 
“{“,”}”,”(“,”)”,”[“,”]” are correct in exp.
For example, the program should print 'balanced' for exp = “[()]{}{[()()]()}” 
and 'not balanced' for exp = “[(])”
*/
#include<iostream>
#include<bits/stdc++.h>
#include<string> // for string class
using namespace std;
void findAns(string s){
    int l=s.size();
    stack <char> a;
    for(int i=0;i<l;i++){
        switch(s[i]){
            case '{' : a.push('{');break;
            case '(' : a.push('(');break;
            case '[' : a.push('[');break;
            case '}' : if(a.top()=='{'){a.pop();}else{cout<<"not balanced";return;}break;
            case ')' : if(a.top()=='('){a.pop();}else{cout<<"not balanced";return;}break;
            case ']' : if(a.top()=='['){a.pop();}else{cout<<"not balanced";return;}break;
            
        }
    }
    if(a.size()==0){
        cout<<"balanced";return;
    }
    else{
        cout<<"not balanced";return;
    }
}
int main()
 {
	//code
	int t;
	cin>>t;
	string s;
	for(int i=0;i<t;i++){
		
		cin >>s;
		findAns(s);
		s.clear();
		cout<<"\n";
		
	}
	return 0;
}
