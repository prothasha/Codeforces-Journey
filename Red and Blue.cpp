#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec1(n);
    for(ll i=0; i<n; i++) cin>>vec1[i];

    ll m; cin>>m;
    vector<ll>vec2(m);
    for(ll i=0; i<m; i++) cin>>vec2[i];

    ll s1=0, s2=0, m1=0, m2=0;
    for(ll i=0; i<n; i++){
        s1+=vec1[i];
        m1=max(m1,s1);
    }
    for(ll i=0; i<m; i++){
        s2+=vec2[i];
        m2=max(m2,s2);
    }
    cout<<m1+m2<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
