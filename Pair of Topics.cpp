#include<bits/stdc++.h>
#define ll long long
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec1(n), vec2(n);
    for(ll i=0; i<n; i++) cin>>vec1[i];
    for(ll i=0; i<n; i++) cin>>vec2[i];
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) vec[i]=vec1[i]-vec2[i];
    sort(vec.begin(), vec.end());
    ll ans=0;
    for(ll i=0; i<n; i++) {
        ll x=upper_bound(vec.begin()+i+1, vec.end(),-vec[i])-vec.begin();
        ans+=(n-x);
    }
    cout<<ans<<endl;
}
int main(){
    p();
    //ll t; cin>>t; while(t--)
    code();
}
