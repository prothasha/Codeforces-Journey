#include<bits/stdc++.h>
#define ll long long
using namespace std;

void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll a, b; cin>>a>>b;
    if(a==b){
        cout<<0<<" "<<0<<endl;
        return;
    }
    ll gcd=abs(a-b);
    ll m=min(a%gcd, gcd-(a%gcd));
    cout<<gcd<<" "<<m<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}

