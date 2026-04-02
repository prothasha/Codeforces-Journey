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
    sort(vec.rbegin(), vec.rend());
    for(ll i=0; i<n; i++) cout<<vec[i]<<" ";
    cout<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}

