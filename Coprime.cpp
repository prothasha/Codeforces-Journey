#include<bits/stdc++.h>
#define ll long long
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin >> n;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];

    vector<ll>ind(1001,0);
    for(ll i=0; i<n; i++){
        ind[vec[i]]=i+1;
    }

    ll ans=-1;
    for(ll i=1; i<=1000; i++){
        for(ll j=1; j<=i; j++){
            ll x=gcd(i, j);
            if(ind[i] && ind[j] && x==1){
                ans=max(ans, ind[i]+ind[j]);
            }
        }
    }
    cout<<ans<<endl;
}
int main(){
    p();
    ll t; cin>>t; while(t--)
    code();
    return 0;
}
