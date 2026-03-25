#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code() {
    ll n; cin>>n;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];
    vector<ll>vec1, vec2;
    for(ll x: vec) {
        if(x%2==0) vec1.push_back(x);
        else vec2.push_back(x);
    }
    vector<ll>b;
    for(ll x: vec1) b.push_back(x);
    for(ll x: vec2) b.push_back(x);
    ll ans=0;
    for(ll i= 0; i<n; i++) {
        for(ll j=i+1; j<n; j++) {
            if(__gcd(b[i], 2*b[j])>1) ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
