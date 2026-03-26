#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll x, n; cin>>x>>n;
    ll ans;
    if(n%4==0) ans=x;
    else if(n%4==1) {
        if(x%2==0) ans=x-n;
        else ans=x+n;
    }
    else if(n%4==2) {
        if(x%2==0) ans=x+1;
        else ans=x-1;
    }
    else {
        if(x%2==0) ans=x+n+1;
        else ans=x-(n+1);
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
