#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll a, b, c, d; cin>>a>>b>>c>>d;
    if(b>=a){
        cout<<b<<endl;
        return;
    }
    if(c<=d){
        cout<<-1<<endl;
        return;
    }
    ll r=a-b;
    ll x=c-d;
    ll y=(r+x-1)/x;
    cout<<b+y*c<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
