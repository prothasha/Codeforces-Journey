#include<bits/stdc++.h>
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int c, m, x; cin>>c>>m>>x;
    int s=c+m+x;
    int p=min(c, m);
    int ans=min(s/3, p);
    cout<<ans<<endl;
}
int main(){
    p();
    int t; cin>>t; while(t--) code();
}
