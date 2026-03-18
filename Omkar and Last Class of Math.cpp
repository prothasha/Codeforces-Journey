#include<bits/stdc++.h>
#define ll long long
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
        return;
    }
    ll d=-1;
    for(ll i=2; i*i<=n; i++){
        if(n%i==0){
            d=n/i;
            break;
        }
    }
    if(d==-1) cout<<1<<" "<<n-1<<endl;
    else cout<<d<<" "<<n-d<<endl;
}
int main(){
    p();
    ll t; cin>>t; while(t--)
    code();
    return 0;
}
