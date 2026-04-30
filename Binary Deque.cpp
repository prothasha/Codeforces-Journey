#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n, s; cin>>n>>s;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) {
        cin>>vec[i];
    }
    ll x=0, ans=1e9;
    for(ll i=0; i<n; i++) {
        s-=vec[i];
        while(s<0) {
            s+=vec[x];
            x++;
        }
        if(s== 0) ans=min(ans, n-(i-x+1));
    }
    if(ans==1e9) ans=-1;
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
