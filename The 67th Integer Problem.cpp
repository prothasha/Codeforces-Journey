#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code() {
    ll x; cin>>x;
    if(x<67) cout<<x+1<<endl;
    else cout<<67<<endl;
}
int main() {
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
