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
    vector<ll>vec2;
    ll x=0, ans=0;
    for(ll i=0; i<n; i++){
        x+=vec[i];
        ans++;
        if(vec[i]<0) vec2.push_back(vec[i]);
        if(x<0) {
            ll y=*min_element(vec2.begin(),vec2.end());
            x-=y;
            vec2.erase(find(vec2.begin(),vec2.end(),y));
            ans--;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t=1;while(t--)
    code();
}
