#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll b,d,s; cin>>b>>d>>s;
    ll ans=LLONG_MAX;
    for(ll i=0; i<3; i++){
        for(ll j=0; j<3; j++){
            ll b2=b, d2=d, s2=s;
            if(i>=1) b2++;
            if(i>=2) d2++;
            if(j<=1) s2++;
            if(j<=0) d2++;
            ll max1=max(d2, s2);
            ll max2=max(b2, max1);
            ll cost=3*max2-(b2+d2+s2);
            ans=min(ans, cost);
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    code();
}
