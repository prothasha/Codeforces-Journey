#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n, k; cin>>n>>k;
    ll ans=LLONG_MIN;
    for(ll i=0; i<n; i++) {
        ll f, t; cin>>f>>t;
        ll j;
        if(t<=k) j=f;
        else j=f-(t-k);
        ans=max(ans, j);
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    //ll t; cin>>t; while(t--)
    code();
}
