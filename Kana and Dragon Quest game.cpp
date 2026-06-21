#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll x,n,m; cin>>x>>n>>m;
    while(n>0 && x>20){
        x=x/2+10;
        n--;
    }
    x-=m*10;
    if(x<=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    fastIO();
    ll t;cin>>t;while(t--)
    code();
}
