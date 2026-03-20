#include<bits/stdc++.h>
#define ll long long
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n, x, y; cin>>n>>x>>y;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];
    map<pair<ll,ll>, ll> freq;
    ll ans=0;
    for(ll v : vec) {
        ll Y=v%y;
        ll X=v%x;
        ll x2=(x-X)%x;
        ans+=freq[{Y, x2}];
        freq[{Y, X}]++;
    }
    cout<<ans<<endl;
}
int main(){
    p();
    ll t; cin>>t; while(t--)
    code();
}
