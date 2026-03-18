#include<bits/stdc++.h>
#define ll long long
using namespace std;
void p(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll x; cin>>x;
    ll p=x%11; ll q=x/111;
    if(p<=q) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    p();
    ll t; cin>>t; while(t--)
    code();
    return 0;
}
