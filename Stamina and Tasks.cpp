#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll n; cin>>n;
    vector<ll>vec1(n),vec2(n);
    for(ll i=0; i<n; i++) cin>>vec1[i]>>vec2[i];
    long double St=1.0, ans=0.0;
    for(ll i=0; i<n; i++){
        long double x=St*vec1[i];
        long double n1=St*(1.0-vec2[i]/100.0);
        long double n2=x+n1*vec1[i+1];
        if(i==n-1 || n2>=St*vec1[i+1]){
            ans+=x;
            St=n1;
        }
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
