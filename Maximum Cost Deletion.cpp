#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n,a,b; cin>>n>>a>>b;
    string s; cin>>s;
    if(b>=0) cout<<a*n+b*n<<endl;
    else {
        ll x=1;
        for(ll i=1; i<n; i++){
            if(s[i]!=s[i-1]) x++;
        }
        cout<<a*n+b*((x/2)+1)<<endl;
    }
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
