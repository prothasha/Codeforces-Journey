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
    ll m=unique(vec.begin(), vec.end())-vec.begin();
    int co=0;
    for(int i=1; i<m-1; i++) {
        if(vec[i-1]>vec[i] && vec[i]>vec[i+1]) co++;
        else if(vec[i-1]<vec[i] && vec[i]<vec[i+1]) co++;

    }
    ll ans=m-co;
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
