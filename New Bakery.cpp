#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n,a,b; cin>>n>>a>>b;
    if(a>=b) cout<<n*a<<endl;
    else {
        ll k=min(n, b-a);
        ll s1=(k*(k-1))/2;
        ll s2=k*b;
        ll p1=s2-s1;
        ll p2=p1+(n-k)*a;
        cout<<max(p1, p2)<<endl;
    }
}
int main(){
    fastIO();
    ll t; cin>>t;
    while(t--) code();
}
