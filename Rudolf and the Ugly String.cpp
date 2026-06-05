#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    //vector<ll>vec(n);
    //for(ll i=0; i<n; i++) cin>>vec[i];
    string s; cin>>s;
    int ans=0;
    for(int i=0; i<n; i++) {
        if(i+4<n && s.substr(i, 5)=="mapie") {
            ans++;
            i+=4;
        }
        else if(i+2<n && s.substr(i, 3)=="map") {
            ans++;
            i+=2;
        }
        else if(i+2<n && s.substr(i, 3)=="pie") {
            ans++;
            i+=2;
        }
    }
    cout<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
