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
    ll o=0;
    for(ll i=0; i<n; i++){
        cin>>vec[i];
        if(vec[i]==1) o++;
    }
    ll x=LLONG_MIN, c=0;
    for(ll i=0; i<n; i++){
        ll val;
        if(vec[i]==0) val=1;
        else val=-1;
        c=max(val, c+val);
        x=max(x, c);
    }
    if(o==n) cout<<n-1<<endl;
    else cout<<o+x<<endl;
}
int main(){
    fastIO();
    code();
}
