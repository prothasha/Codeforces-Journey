#include<bits/stdc++.h>
#define ll long long
using namespace std;
void fastIO(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}
void code(){
    //ll n; cin>>n;
    //vector<ll>vec(n);
    //for(ll i=0; i<n; i++) cin>>vec[i];
    long long a1, a2, a3, a4, a5, a6; cin>>a1>>a2>>a3>>a4>>a5>>a6;
    long long total=(a1+a2+a3)*(a1+a2+a3)-a1*a1-a3*a3-a5*a5;
    cout<<total<<endl;
}
int main(){
    fastIO();
    //ll t; cin>>t; while(t--)
    code();
}
