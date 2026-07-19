#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
bool P(ll x){
    if(x<2) return false;
    for(ll i=2; i*i<=x; i++){
        if(x%i==0) return false;
    }
    return true;
}
void code(){
    ll n; cin>>n;
    if(n==1){
        cout<<"FastestFinger"<<endl;
        return;
    }
    if(n%2==1){
        cout<<"Ashishgup"<<endl;
        return;
    }
    if(n==2){
        cout<<"Ashishgup"<<endl;
        return;
    }
    ll m=n;
    ll val=0;
    while(m%2==0){
        m/=2;
        val++;
    }
    if(m==1){
        cout<<"FastestFinger"<<endl;
        return;
    }
    if(val==1){
        if(P(m)) cout<<"FastestFinger"<<endl;
        else cout<<"Ashishgup"<<endl;
        return;
    }
    cout<<"Ashishgup"<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
