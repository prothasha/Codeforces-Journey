#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code() {
    ll n, m, k; cin>>n>>m>>k;
    vector<ll>vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];
    ll b=1, x=k, ans=0;
    for(ll i=n-1; i>=0; i--) {
        if(vec[i]<=x) {
            x-=vec[i];
            ans++;
        }
        else {
            b++;
            if(b>m) break;
            x=k-vec[i];
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    fastIO();
    //ll t; cin>>t; while(t--)
    code();
}
