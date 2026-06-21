#include<bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void code(){
    ll n; cin>>n;
    vector<ll> vec(n);
    for(ll i=0; i<n; i++) cin>>vec[i];
    sort(vec.begin(), vec.end());
    ll max1=vec.back();
    ll p=n/2;
    int pr=0;
    for(int i=0; i<n && pr<p; i++){
        if(vec[i]==max1) continue;
        ll rem=max1%vec[i];
        bool ok=false;
        for(int j=0; j<n; j++){
            if(vec[j]==rem){
                ok=true;
                break;
            }
        }
        if(!ok){
            cout<<max1<<" "<<vec[i]<<endl;
            pr++;
        }
    }
}

int main(){
    fastIO();
    ll t; cin>>t;
    while(t--) code();
}
