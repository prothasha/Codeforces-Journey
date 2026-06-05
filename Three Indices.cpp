#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec(n), ans(3);
    for(ll i=0; i<n; i++) cin>>vec[i];
    bool ok=false;
    for(int i=0; i<n; i++) {
        if(i+1<n && i-1>=0 && vec[i]>vec[i-1] && vec[i]>vec[i+1]) {
            ok=true;
            cout<<"YES"<<endl<<i<<" "<<i+1<<" "<<i+2<<endl;
            break;
        }
    }
    if(!ok) cout<<"NO"<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
