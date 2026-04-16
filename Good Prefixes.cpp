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
    ll sum=0, max1=0;
    int ans=0;
    for(ll i=0; i<n; i++) {
        sum+=vec[i];
        max1=max(max1, vec[i]);
        if(sum==2*max1) ans++;
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
