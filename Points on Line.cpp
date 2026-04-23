#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n, d; cin>>n>>d;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];
    ll ans=0;
    int x=0;
    for(int i=0; i<n; i++){
        while(x<n && vec[x]-vec[i]<=d) x++;
        ll l=x-i-1;
        if(l>=2) ans+=l*(l-1)/2;
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    //ll t; cin>>t; while(t--)
    code();
}

