#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code() {
    vector<ll>vec(7);
    ll total=0;
    for(int i=0; i<7; i++) {
        cin>>vec[i];
        total+=vec[i];
    }
    ll ans=LLONG_MIN;
    for(int i=0; i<7; i++) {
        ll x=2*vec[i]-total;
        ans=max(ans, x);
    }
    cout<<ans<<endl;
}

int main() {
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
