#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<vector<int>>a(n,vector<int>(n));
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    ll ans=0;
    for(ll i=0; i<n; i++) {
        for(ll j=i+1;j<n;j++) {
            if(a[i][j]==1 && a[j][i]==1) ans++;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    code();
}
