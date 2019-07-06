#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int stepPerms(int n) {
    // if(n==0){
    //     return 1;
    // }
    // else if(n==1 || n==2){
    //     return n;
    // }
    // else if(n==3){
    //     return 4;
    // }
    // else{
    //     return  stepPerms(n-1)+stepPerms(n-2)+stepPerms(n-3);   
    // }
    vector<int> a(n,0);
    a[0]=1;
    a[1]=2;
    a[2]=4;
    for(int i=3;i<n;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
return a[n-1];
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int res = stepPerms(n);

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
