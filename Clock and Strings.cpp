#include<bits/stdc++.h>
using namespace std;
int main() {
    int t; cin>>t;
    while(t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int co=0;
        int m=min(a, b), n=max(a, b);
        for(int i=m; i<=n; i++) {
            if(i==c) co++;
            else if(i==d) co++;
        }
        if(co==0 || co==2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
