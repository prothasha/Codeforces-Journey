#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    ll x=n, pr=n, max1=0;
    for(ll i=2; i*i <=x; i++) {
        if(x%i==0) {
            int co=0;
            while(x%i==0) {
                x/=i;
                co++;
            }
            if(co>max1) {
                max1=co;
                pr=i;
            }
        }
    }
    if(x>1 && max1==0) {
        cout<<1<<endl<<n<<endl;
        return;
    }
    cout<<max1<<endl;
    ll ans=n;
    for(int i=1; i<max1; i++) {
        cout<<pr<<" ";
        ans/=pr;
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t;
    while(t--) code();
}
