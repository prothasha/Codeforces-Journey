#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
bool isSquare(ll x){
    ll r=sqrtl(x);
    return r*r==x;
}
void code(){
    ll n; cin>>n;
    if(n%2) cout<<"NO"<<endl;
    else
    {
        if(isSquare(n)) cout<<"YES"<<endl;
        else if(isSquare(n/2)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
