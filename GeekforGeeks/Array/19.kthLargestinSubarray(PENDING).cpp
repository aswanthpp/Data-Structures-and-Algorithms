/*
Given an input stream of n integers the task is to insert integers to stream 
and print the kth largest element in the stream at each insertion.
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void findAns(vector <int> a,int k){
    int n=a.size();
    //cout<<"\n n value "<<n<<"\n";
    vector <int> b(k);
    vector <int> c(n);
    for(int i=0;i<n;i++){
        if(i<k-1){
            c[i]=-1;
            b[i]=a[i];
            //sort(b.begin(),b.end());
            //cout<<"\n i value "<<i<<"\n";
            //cout<<"\n B array ";
            /*for(int i=0;i<k;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            */
        }
        else{
             b[i%k]=a[i];
             sort(b.begin(),b.end());
             //cout<<"\nb = "<<b[0]<<"\n";
             c[i]=b[0];
           
            
        }
    }
    for(int i=0;i<n;i++){
        cout<<c[i]<<" ";
    }
}
int main()
 {
	//code
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int k;
		cin>>k;
		int n;
		cin>>n;
		vector <int> a;
		for(int j=0;j<n;j++){
		    int x;
		    cin>>x;
		    a.push_back(x);
		}
		findAns(a,k);
		cout<<"\n";
		
	}
	return 0;
}
