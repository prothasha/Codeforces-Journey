#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int n; cin>>n;
        string s; cin>>s;
        int mx=0, c=0;
        for(int i=0; i<n; i++) {
            if(i>0 && s[i]==s[i-1]) c++;
            else c=1;
            mx=max(mx, c);
        }
        cout<<mx+1<<endl;
    }
    return 0;
}
