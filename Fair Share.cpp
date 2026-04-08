#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec1;
    vector<ll>vec2;
    ll a=0, b=0;
    for(ll i=0; i<n; i++) {
        ll x, y;
        cin>>x>>y;
        a+=x; b+=y;
        vec1.push_back(x);
        vec2.push_back(y);
    }
    for(ll i=0; i<n; i++) {
        ll p=a-vec1[i];
        ll t=b-p;
        if(t<=vec2[i]) {
            cout<<i+1<<endl;
            return;
        }
    }
    cout<<"impossible"<<endl;
}
int main(){
    fastIO();
    code();
}
