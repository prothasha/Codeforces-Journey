#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll tt; cin>>tt;
    ll t=0;
    vector<ll>vec;
    for(ll i=0; i<tt; i++){
        ll n, a, r, p; cin>>n>>a>>r>>p;
        if(t<a) t=a;
        ll w=a+p;
        if(t<=w){
            vec.push_back(n);
            t+=r;
        }
    }
    for(ll x:vec) cout<<x<<endl;
}
int main(){
    fastIO();
    //ll tt; cin>>tt; while(tt--)
    code();
}
