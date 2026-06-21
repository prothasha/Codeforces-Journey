#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    int n; cin>>n;
    vector<ll>vec(n), vec1(n);
    for(ll i=0; i<n; i++) cin >> vec[i];
    vec1=vec;
    ll ans=0;
    for(ll i=0; i<n; i++){
        for(ll j=i+1; j<n; j++){
            ans=max(ans, vec[i]^vec1[j]);
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    int t; cin>>t; while(t--)
    code();
}
