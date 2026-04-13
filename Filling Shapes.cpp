#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    //vector<ll>vec(n);
    //for(ll i=0; i<n; i++) cin>>vec[i];
    if(n%2==0) {
        ll x=n/2;
        cout<<(ll)pow(2, x)<<endl;
    }
    else cout<<0<<endl;
}
int main(){
    fastIO();
    //ll t; cin>>t; while(t--)
    code();
}
