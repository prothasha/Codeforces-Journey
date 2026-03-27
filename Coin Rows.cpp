#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll m; cin>>m;
    vector<ll>r1(m+1), r2(m+1);
    for(ll i=1; i<=m; i++) cin>>r1[i];
    for(ll i=1; i<=m; i++) cin>>r2[i];
    vector<ll>x1(m+2,0), x2(m+1,0);
    for(ll i=m; i>=1; i--) x1[i]=x1[i+1]+r1[i];
    for(ll i=1; i<=m; i++) x2[i]=x2[i-1]+r2[i];
    ll ans=LLONG_MAX;
    for(ll k=1; k<=m; k++){
        ll bob=max(x1[k+1],x2[k-1]);
        ans=min(ans,bob);
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
