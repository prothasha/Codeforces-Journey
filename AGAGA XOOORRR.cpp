#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];
    ll t=0;
    for(ll i=0; i<n; i++) t^=vec[i];
    if(t==0) {
        cout<<"YES"<<endl;
        return;
    }
    int p=0, co=0;
    for(ll i=0; i<n; i++) {
        p^=vec[i];
        if(p==t) {
            co++;
            p=0;
        }
    }
    if(co>=2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
