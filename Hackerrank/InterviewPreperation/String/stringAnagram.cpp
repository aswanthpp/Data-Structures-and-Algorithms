#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
vector <int> dic(26,0);
// vector <int> dic2(26,0);
for(int i=0;i<a.length();i++){
    dic[a[i]-'a']+=1;
}
for(int i=0;i<b.length();i++){
    dic[b[i]-'a']-=1;
}
int sum=0;
for(int i=0;i<26;i++){
sum+=abs(dic[i]);
// sum2+=dic2[i];
}

return sum;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
