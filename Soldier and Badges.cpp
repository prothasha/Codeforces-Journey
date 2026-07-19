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
    sort(vec.begin(), vec.end());
    ll ans=0;
    ll p=vec[0];
    for(ll i=1; i<n; i++){
        if(vec[i]<=p){
            ans+=(p+1-vec[i]);
            vec[i]=p+1;
        }
        p=vec[i];
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    code();
}
