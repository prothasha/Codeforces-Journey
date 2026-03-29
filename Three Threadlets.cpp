#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    ll a,b,c; cin>>a>>b>>c;
    vector<ll>vec={a,b,c};
    sort(vec.begin(),vec.end());
    ll x=vec[0];
    if(vec[1]%x!=0 || vec[2]%x!=0){
        cout<<"NO"<<endl;
        return;
    }
    ll p=(vec[0]/x-1)+(vec[1]/x-1)+(vec[2]/x-1);
    if(p <=3) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
int main(){
    fastIO();
    ll t; cin>>t; while(t--)
    code();
}
