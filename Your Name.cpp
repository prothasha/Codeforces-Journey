#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n--) {
        int t; cin>>t;
        string a, b; cin>>a>>b;
        map<char, int>s1, s2;
        for(int i=0; i<a.size(); i++) {
            s1[a[i]]++;
        }
        for(int i=0; i<b.size(); i++) {
            s2[b[i]]++;
        }
        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}

